#include<iostream>
using namespace std; 

int Busqueda(int A[], int t, int n ){
    int bandera; 
    for(int i= 0 ; i < t ; i++ ){
        if(A[i] == n ){ bandera = 1; }        
        else{ bandera = 0 ; }
    }
    return bandera;
}

int main(){
    int arreglo[100];
    int localizador, t , n , elemento;
    cout<<"Cuantos elementos tendrAa su arreglo?: ";cin>>n;
    for(int i = 0 ; i < n ; i++){
        cout<<"Ingrese dato ["<<i+1<<"] del arreglo : ";cin>>arreglo[i];
    }
    t = (sizeof(arreglo)/sizeof(arreglo[0]));
    cout<<"Que elemento desea buscar? : "; cin >> elemento ; 
    localizador = Busqueda(arreglo, t , elemento); 
    switch(localizador){
        case 0:
            cout<<"Numero "<<elemento<<" encontrado";
        break;
        case 1:
            cout<<"El numero "<<elemento<<" no fue encontrado";
        break;
    }
}

