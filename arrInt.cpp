#include "arrInt.h"
bool primo(int numero){
    int contador = 0;
    for(int i=0;i<numero;i++){
        if(!(numero%i))
            return false;
    }
    return true;
}
arrInt::arrInt(){
    size = 0;
    arr = new int[0];
}
arrInt::arrInt(int size){
    this->size = size;
    arr = new int[size];
    for(int i=0;i<size;i++){
        arr[i]=0;
    }
}
arrInt::arrInt(int arr1[],int size){
    this->size = size;
    for(int i = 0;i<size;i++){
        arr[i]=arr1[i];
    }
}
arrInt::~arrInt(){
    delete []arr;
}
void arrInt::insertar(int elemento){
    int *tmp = new int[size+1];
    for(int i=0;i<size;i++){
        tmp[i]=arr[i];
    }
    size++;
    tmp[size-1] = elemento;
    delete [] arr;
    arr = tmp;
}
void arrInt::insertar(int elemento,int indice){
    arr[indice] = elemento;
}
void arrInt::eliminar(int indice){
    int *tmp = new int[size-1];
    for(int i=0; i<size;i++){
        if(i>=indice){
            tmp[i] = arr[i+1];
            continue;
        }
        tmp[i] = arr[i];
    }
    size--;
    delete[]arr;
    arr = tmp;
}
void arrInt::vaciar(){
    size = 0;
    delete [] arr;
}
int arrInt::menor(){
    int m = arr[0];
    for(int i=1;i<size; i++){
        m<arr[i]? m = m : m = arr[i];
    }
    return m;
}
int arrInt::mayor(){
    int M = arr[0];
    for(int i=1;i<size; i++){
        M>arr[i]? M = M : M = arr[i];
    }
    return M;
}
int arrInt::suma(){
    int sum = 0;
    for(int i=0;i<size;i++){
        sum += arr[i];
    }
    return sum;
}
int arrInt::promedio(){
    return suma()/size;
}
int arrInt::mayorP(){
    int M = 0;
    for(int i=0;i<size;i++){
        if(primo(arr[i])){
            M = arr[i];
            for(int j=i+1;j<size; j++){
                M>arr[j]&&primo(arr[j])? M = M : M = arr[j];
            }
            return M;
        }

    }
    return M;
}
int arrInt::menorP(){
    int m = 0;
    for(int i=0;i<size;i++){
        if(primo(arr[i])){
            m = arr[i];
            for(int j=i+1;j<size; j++){
                m<arr[j]&&primo(arr[j])? m : m = arr[j];
            }
            return m;
        }
    }
}
void arrInt::ordenar(){
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]>arr[j]){
                int tmp = arr[i];
                arr[i]=arr[j];
                arr[j]=tmp;
            }
        }
    }
}
void arrInt::invertir(){
    int j = size-1;
    for(int i=0;i<size/2;i++,j--){
        int tmp = arr[i];
        arr[i]=arr[j];
        arr[j]=tmp;
    }
}
void arrInt::mostrar(){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
