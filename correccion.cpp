#include<iostream>
using namespace std;

int tamanio(char* cadena, char tope = '\0'){
    int contador = 0;
    for(char *i = cadena; *i!=tope; i++,contador++);
    return contador;
}
int elevar(int base, int exponente){
    if(exponente==0){return 1;}
    return exponente==1? base : base * elevar(base,--exponente);
}
int convertir(char *cadena){
    char tmp;
    int n = 0;
    int tam =tamanio(cadena)-1;
    for(char* i = cadena;*i!='\0'; i++,tam--){
        tmp = *i-'0';
        n += tmp*elevar(10,tam);
    }
    return n;
}
/*
double notacion(char *numero){
    double numeroFinal = 0; //lo que retornaremos
    int tam1,tam2;
    char *parteEntera="";
    char *parteDecimal="";
    char*ptr = parteEntera;
    //para la parte entera
    for(char*i=numero;*i!='.';i++,ptr++){
        *ptr= *i;
    }
    numeroFinal+=convertir(parteEntera);
    //para la coma flotante
    char*ptr2 = parteDecimal;
    tam1 = tamanio(numero,'.')+1;
    char* i = numero;
    i+=tam1;
    for(;*i!='e';i++,ptr2++){
        *ptr2 = *i;
    }
    tam2=tamanio(numero,'e');
    numeroFinal+=convertir(parteDecimal)/elevar(10,tam2-tam1-1);
    cout<<parteDecimal;
}

double notacion(char* numero){
    char tmp;
    double n = 0;
    int tam=tamanio(numero,'.')-1;
    for(char* i = numero; *i!='.'; i++,tam--){
        tmp = *i-'0';
        n += tmp*elevar(10,tam);
    }
    cout<<n;
    tam=tamanio(numero,'.')+1;
    int aux = tamanio(numero,'e')-tamanio(numero,'.')-1;
    //        esto es el tamaño de todo el numero - 1 para obviar la coma flotante
    int j = 1;
    char *i=numero;
    i+=tam;
    for(;j<=aux;j++){
        tmp = *i-'0';
        n+=(float)tmp/elevar(10,j);
        i++;
    }
    tmp = numero[tamanio(numero,'e')+1];
    int exponente = numero[tamanio(numero,'e')+2]-'0';
    if(tmp == '+')
        return n * elevar(10,exponente);
    if(tmp == '-')
        return n/ elevar(10,exponente);
}

*/¿
bool substring(char* s, char* t){
    char*j=s;
    for(char *i=t; *i!='\0';i++,j++){
        if(*t==*s){
            char*tmp_1 = t;
            char*tmp_2 = s;
            int tam = tamanio(t);
            while(true){
                if(*tmp_1==*tmp_2){
                    tmp_1++;
                    tmp_2++;
                    --tam;
                    if(tam==0)
                        return true;
                    continue;
                }
                else{
                    break;
                }
            }

        }

    }
    return false;
}

void invertir(char*origen, char*llegada,int i=1){
    if(*origen=='\0')
        return;
    *llegada = *(origen+tamanio(origen)-i);
    invertir(++origen,++llegada,++i);
}

bool palindrome(char*cadena){
    char espejo[256];
    invertir(cadena,espejo);
    char *ptr = espejo;
    char *ptr2 = cadena;
    bool resultado=false;
    for(int i=0; i<tamanio(cadena);i++,ptr++,ptr2++){
        resultado = *ptr == *ptr2? true : false;
    }
    return resultado;
}


int main(){
    //cout<<notacion("124.43e+2");
    char*cad1 = "Amor a Roma";
    char cad2[4];
    invertir(cad1,cad2);
    cout<<cad2<<endl;
    cout<<palindrome("somos o no somos")<<endl;
    char*cad3 = "123.4332e";
    //cout<<convertir(cad3);
    notacion(cad3);
    return 0;
}
