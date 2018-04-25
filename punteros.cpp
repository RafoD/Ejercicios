#include <iostream>
using namespace std;

void imprimir(int a[],int tamanio){
    for(int i = 0; i<tamanio; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
//suma
int suma(int *arr, int tamanio){
    int sum = 0;
    for(int *i=arr; i<=(arr+tamanio-1);i++)
        sum+=*i;
    return sum;
}

int suma_1(int *arr, int tamanio){
    if(tamanio==1)
        return *arr;
    return *arr + suma_1(++arr,--tamanio);
}
//invertir
void invertir(int *arr, int tamanio){
    int tmp;
    int *final = arr+tamanio-1;
    while(arr<=final){
        tmp = *arr;
        *arr = *final;
        *final = tmp;
        arr++;
        final--;
    }
}
//tamaño
int tamanioDe(char *cadena){
    int c = 0;
    while(*cadena!='\0'){
        cadena++;
        c++;
    }
    return c;
}
//copiar
void copiar(char *a, char *b){
    for(int i=0; i<tamanioDe(b);a++,b++)
        *a = *b;
}

//concatenar
void concatenar(char *a, char *b){
    int t = tamanioDe(a);
    int t_2 = tamanioDe(b);
    a+=t;
    for(int i = 0; i<t_2; i++,a++,b++)
        *a = *b;
}



int main(){

    int arr[] = {1,2,3,4,5,6};
    //suma
    cout<<suma_1(arr,6)<<endl;
    //invertir
    invertir(arr,6);    imprimir(arr,6);
    char cad[] = "jajajaja";
    char cad_1[] = "jejejeje";
    char cad_2[13] = "";
    //tamaño
    cout<<tamanioDe(cad)<<endl;
    //copiar
    copiar(cad_2,cad);
    cout<<cad_2<<endl;
    //concatenar
    concatenar(cad,cad_1);
    cout<<cad;
    return 0;
}
