#include <iostream>
using namespace std;

int main(){
    //Ejercicio 1
    int edad;
    cout<<"Ejercicio 1"<<endl;
    cout<<"Ingrese su edad: ";
    cin>>edad;
    if(edad>=18)
        cout<<"Usted es mayor de edad"<<endl;
    else{
        cout<<"Usted es menor de edad"<<endl;
    }
    cout<<endl;
    //Ejercicio 2
    int n;
    cout<<"Ejercicio 2"<<endl;
    cout<<"Ingrese un n: ";
    cin>>n;
    for(int i=1; i<n; i++){
        cout<<i<<", ";
    }
    cout<<n<<endl;
    cout<<endl;

    //Ejercicio 3
    int n_1;
    int mayor, menor;
    float suma;
    cout<<"Ejercicio 3"<<endl;
    cout<<"Ingrese 3 numeros: "<<endl;
    cout<<"Numero (1): "; cin>>n_1;
    mayor = n_1;
    menor = n_1;
    suma = n_1;
    for(int i=1; i<3; i++){
        cout<<"Numero ("<<i+1<<"): ";
        cin>>n_1;
        suma += n_1;
        mayor = mayor<n_1? n_1 : mayor;
        menor = menor>n_1? n_1 : menor;
    }
    cout<<"El mayor es :"<<mayor<<endl;
    cout<<"El menor es :"<<menor<<endl;
    cout<<"El promedio es: "<<suma/3<<endl;
    cout<<endl;

    //Ejercicio 4
    int a,b;
    cout<<"Ejercicio 4"<<endl;
    cout<<"Ingrese dos numeros: "<<endl;
    cout<<"Numero (1): "; cin>>a;
    cout<<"Numero (2): "; cin>>b;
    if(!(a%2) && !(b%2))
        cout<<"Ambos numeros son multiplos de dos"<<endl;
    if(!(a%b))
        cout<<"El primer numero es multiplo del segundo"<<endl;
    if(a*a == b){
        cout<<"El primer numero al cuadrado tiene como resultado el segundo"<<endl;
    }
    cout<<endl;

    //Ejercicio 5
    cout<<"Ejercicio 5"<<endl;
    cout<<"Ingrese un numero: ";
    int numero;
    cin>>numero;
    int contador = 0;
    int tmp = 2;
    cout<<endl;
    while((contador == 0)&&(tmp<numero)){
        if(!(numero%tmp)){
            contador++;
        }
        tmp++;
    }
    if(contador)
        cout<<"El numero no es primo"<<endl;
    else{
        cout<<"El numero es primo"<<endl;
    }
    cout<<endl;

    //Ejercicio 6
    cout<<"Ejercicio 6"<<endl;
    cout<<"Ingrese un numero: "; cin>>numero;
    for(int i=2; i<numero; i++){
        contador = 0;
        tmp = 2;
        while((contador == 0)&&(tmp<i)){
        if(!(i%tmp))
            contador++;
        tmp++;

        }
        if(!contador)
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<endl;

    //Ejercicio 7
    cout<<"Ejercicio 7"<<endl;
    cout<<"Ingrese un numero: "; cin>>numero;
    for(int i=10000; i>=1; i/=10){
        tmp = numero;
        cout<<tmp/i<<"\t";
        numero %= i;
    }
    cout<<endl;
    cout<<endl;

    //Ejercicio 8
    cout<<"Ejercicio 8"<<endl;
    cout<<"Ingrese un numero: "; cin>>numero;
    int tmp2;
    tmp = numero/1000;
    tmp2 = numero % 100;
    tmp2 = (tmp2 % 10)*10 + (tmp2/10);

    if(tmp2 == tmp)
        cout<<"El numero es palindrome"<<endl;
    else{
    cout<<"El numero no es palindrome"<<endl;}
    cout<<endl;

    //Ejercicio 9
    int anio;
    cout<<"Ejercicio 9"<<endl;
    cout<<"Ingrese un año : ";cin>>anio;
    if(!(anio%4)||!(anio%400)&&(anio%100))
        cout<<"El anio es bisiesto"<<endl;
    else{
        cout<<"El anio no es bisiesto"<<endl;
    }
    cout<<endl;

    //Ejercicio 10
    cout<<"Ejercicio 10"<<endl;
    cout<<"Ingrese un numero: ";cin>>numero;
    tmp = 1;
    tmp2 = 0;
    suma = 1;
    for(int i = 0;i<numero;i++){
        suma = tmp + tmp2;
        tmp = tmp2;
        tmp2 = suma;
        cout<<tmp2<<" ";
    }
    cout<<endl;
    cout<<endl;

    //Ejercicio 11
    cout<<"Ejercicio 11"<<endl;
    cout<<"Ingrese un numero: ";cin>>numero;
    int factorial = 1;
    for(int i=2; i<=numero; i++){
        factorial *=i;
    }
    cout<<factorial<<endl;

    return 0;
}
