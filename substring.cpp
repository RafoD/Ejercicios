#include<iostream>
using namespace std;
int tamanio(char* cadena, char tope = '\0'){
    int contador = 0;
    for(char *i = cadena; *i!=tope; i++,contador++);
    return contador;
}

bool substring(char*a,char*b){
    //primer bucle que itera del primer elemento
    //hasta el ultimo elemento de la cadena a(la mas extensa)
    for(char *i = a;*i!='\0';i++){
        //el siguiente condicional permite reonocer una primera coincidencia
        //entre el primer elemento de la cadena b(la sub cadena) y
        //el elemento a en el primer bucle
        if(*i==*b){
            char*ptr = i; //declaramos el puntero ptr dandole la direccion del elemento a
            char*ptr1 = b; //declaramos el puntero ptr1 dandole la direccion del primer elemento de b
            int contador=0; //contador que ira incrementando si hay mas coincidencias
            //bucle while que abarca la extension de la cadena b
            while(*ptr1!='\0'){
                //el siguiente condicional permite reconocer coincidencias entre las dos cadenas
                if(*ptr==*ptr1){
                    ++contador;
                    //se incrementa el contador, con ++contador para poder analizar despues
                    //si se ha alcanzado el tope de la subcadena y poder retornar true
                    ptr++;//se incrementan los punteros para avanzar en la cadena
                    ptr1++;
                    //condicional que al cumplirse retorna true porque todos los elementos de la cadena b coinciden
                    if(contador == tamanio(b))
                        return true;
                    continue;//continue para regresar al while y no tocar el break
                }
                break;// se utiliza si en algun momento algun elemento a no coincide con b, para regresar al for y seguir iterando
            }
        }
    }
    return false;//se retorna false si al haber analizado todos los elementos de a no se encontro ninguna coincidencia total
}

int main(){
    char c[]="12345";
    char s[]="2345";
    cout<<substring(c,s);
    return 0;
}
