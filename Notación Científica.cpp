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

double convertir(char *cadena){
    char tmp;
    double n = 0;
    int tam =tamanio(cadena)-1;
    for(char* i = cadena;*i!='\0'; i++,tam--){
        tmp = *i-'0';
        n += tmp*elevar(10,tam);
    }
    return n;
}

bool signo(char* numero){
    char*ptr = numero;
    while(*ptr!='\0'){
        if(*ptr=='e'){
            if(*(ptr+1)>='0' && *(ptr+1)<='9')
                return true;
            else{
                ptr++;
                if(*ptr=='+'){
                    return true;
                }
                if(*ptr=='-'){
                    return false;
                }
            }
            return true;
        }
        ptr++;
    }
}

double notacion(char *numero){
    //variables
    double numeroFinal = 0; //lo que retornaremos
    char cadena[10]="";//parte entera
    char cadena_2[10]="";//parte decimal
    char exponente[10]="";//exponente
    char *ptr_cadena=cadena;//puntero que ira apuntando a cada cadena
    char *ptr=numero;//ptr para el numero, que funcionara para todos los bucles

    //hallamos la parte entera
    for(;*ptr!='.';ptr++,ptr_cadena++){
        *ptr_cadena = *ptr;
    }
    //sumamos el resultado convertido a nuestro numero final
    numeroFinal += convertir(cadena);

    //reiniciamos el puntero a la segunda cadena
    ptr_cadena = cadena_2;
    //hacemos ptr++ para que empiece a contar desde el caracter despues del '.'
    ptr++;
    //variable para contar los decimales
    int contadorDecimales = 0;
    //hallamos la parte decimal
    for(;*ptr!='e';ptr++,ptr_cadena++,contadorDecimales++){
        *ptr_cadena = *ptr;
    }
    //sumamos el resultado de la conversion de la parte decimal,
    //dividiendo entre 10 elevado al numero de decimales
    numeroFinal += convertir(cadena_2)/elevar(10,contadorDecimales);

    //reiniciamos el puntero a la cadena exponente
    ptr_cadena = exponente;

    //ahora hallamos el exponente
    while(*ptr!='\0'){
        if(*ptr>='0' && *ptr<='9'){
            *ptr_cadena = *ptr;
            ptr_cadena++;
        }
        ptr++;
    }

    //utilizamos la funcion signo, que devuelve 1 si el signo es '+' y 0 si es '-'
    if(signo(numero)){
        //al ser '+', entonces se multiplica por 10 elevado al exponente
        return numeroFinal*elevar(10,convertir(exponente));
    }
    else{
        //al ser '-', entonces se divide por 10 elevado al exponente
        return numeroFinal/elevar(10,convertir(exponente));
    }
}

int main(){
    char *cadena_3 = "14.523e2";
    char *cadena_2 = "242.54e-4";
    char *cadena = "12.4e+3";
    cout<<cadena_3<<" --> "<<notacion(cadena_3)<<endl;
    cout<<cadena_2<<" --> "<<notacion(cadena_2)<<endl;
    cout<<cadena<<" --> "<<notacion(cadena);
return 0;
}
