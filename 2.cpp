#include <iostream>
#include <string>
using namespace std;


string siNo(bool que){
    if(que)
        return "Si";
    return "No";
}

bool uno(int edad){
    if(edad>=18)
        return true;
    return false;
}

void dos(int n){
    cout<<"Su n es: "<<n<<endl;
    for(int i=1; i<n; i++){
        cout<<i<<", ";
    }
    cout<<n<<endl;
    cout<<endl;
}
//3
void tres(){
    int n_1;
    float suma;
    int mayor, menor;
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
}

void cuatro(int a, int b){
    cout<<"Numero (1): "<<a<<endl;
    cout<<"Numero (2): "<<b<<endl;
    if(!(a%2) && !(b%2))
        cout<<"Ambos numeros son multiplos de dos"<<endl;
    if(!(a%b))
        cout<<"El primer numero es multiplo del segundo"<<endl;
    if(a*a == b)
        cout<<"El primer numero al cuadrado tiene como resultado el segundo"<<endl;
    cout<<endl;
}

//5
bool primo(int numero){
    bool contador = false;
    int tmp = 2;
    while((contador == 0)&&(tmp<numero)){
        if(!(numero%tmp)){
            contador = true;
        }
        tmp++;
    }
    contador = false;
    return contador;
}

void cinco(){
    cout<<"Ejercicio 5"<<endl;
    cout<<"Ingrese un numero: ";
    int numero;
    cin>>numero;
    cout<<"¿El numero es primo? :";
    cout<< siNo(primo(numero));
}

void seis(int n){
    while(n-1){
        primo(n);
        n--;
    }
}


int main(){

    int ejercicio;
    cin>>ejercicio;
    switch(ejercicio){
    case 1 :
        int edad;
        cout<<"Ingrese una edad: ";
        cin>>edad;
        cout<<"Es mayor de edad?: ";
        cout<<siNo(uno(edad));
        break;

    case 2 :
        int n;
        cout<<"Ingrese un numero: ";
        cin>>n;
        dos(n);
        break;
    case 3:
        tres();
        break;
    case 4:
        int a,b;
        cout<<"Ingrese dos numeros: ";
        cin>>a;
        cin>>b;
        cuatro(a,b);
        break;
    case 5:
        cinco();
        break;
    case 6:

        cout<<"Ingrese un numero :";cin>>n;
        seis(n);

}
/*
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
    cout<<"Ingrese un anio : ";cin>>anio;
    if(!(anio%4) && (anio%100) || !(anio%400)){
         cout<<"El anio es bisiesto ";
    }else{
         cout<<"El anio no es bisiesto ";
    }

    cout<<endl;
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
*/
    return 0;
}
