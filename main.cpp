#include <iostream>
using namespace std;

void imprimir(int a[],int tamanio){
    for(int i = 0; i<tamanio; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
//suma
int suma(int arr[], int tamanio){
    int sum = 0;
    for(int i=0; i<tamanio;i++){
        sum+=arr[i];
    }
    return sum;
}

int suma_1(int arr[], int tamanio){
    if(tamanio==1)
        return arr[0];
    tamanio--;
    return arr[tamanio] + suma_1(arr,tamanio);
}
//invertir
void invertir(int arr[], int tamanio){
    int izquierda = 0;
    int derecha = tamanio-1;
    while(izquierda<=derecha){
        int aux = arr[izquierda];
        arr[izquierda] = arr[derecha];
        arr[derecha] = aux;
        izquierda++;
        derecha--;
    }
}

//tamaño
int tamanioDe(char cadena[]){
    int c=0;
    while(cadena[c]!='\0'){
        c++;
    }
    return c;
}
//copiar
void copiar(char a[], char b[]){
    for(int i=0; i<tamanioDe(b);i++){
        a[i] = b[i];}
}
void copiar_2(char a[], char b[],int aux=0){
    if(aux > tamanioDe(b))
        return;
    a[aux] = b[aux];
    aux++;
    return copiar_2(a,b,aux);
}
//concatenar
void concatenar(char a[], char b[]){
    int t = tamanioDe(a);
    int t_2 = tamanioDe(b);
    for(int i = 0; i<t_2; i++){
        a[t] = b[i];
        t++;
    }
}



int main(){
    int arr[] = {1,2,3,4,5,6};
    //suma
    cout<<suma(arr,6)<<endl;
    //invertir
    invertir(arr,6);    imprimir(arr,6);
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
