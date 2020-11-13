#include<iostream>
using namespace std ; 

int Busqueda(int A[], int t, int n ){
    int bandera; 
    for(int i= 0 ; i < t ; i++ ){
        if(A[i] == n ){
            bandera = 1; 
        }        
        else{
            bandera = 0 ;
        }
    }
    return bandera;
}

int main(){
    int arreglo[]= {12,18,-20,0,15,12,9};
    int localizador, t;
    t = (sizeof(arreglo)/sizeof(arreglo[0]));
    localizador = Busqueda(arreglo, t , 12); 
    switch(localizador){
        case 0:
            cout<<"Numero 12 encontrado";
        break;
        case 1:
            cout<<"Numero 12 no encontrado";
        break;
    }
}

