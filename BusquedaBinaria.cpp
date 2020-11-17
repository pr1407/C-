#include<iostream>
using namespace std;

int BusquedaBinaria(int A[],int left,int right, int x){
    if(right >= left){
        int mid = left+(right-left)/2;
        if(A[mid] == x ){
            return mid;
        }
        else{
            if(A[mid] > x){
                return BusquedaBinaria(A, left , mid-1 , x);
            }
            else{
                return BusquedaBinaria(A,mid+1,right,x);
            }
        }
    }
    return -1;
}

int main(){
    int elemento , n , t , index; // elemento = lo que se busca , n = numero , t = cantidad de elementos, index = posicion
    int arreglo[100]; //Array

    cout<<"Cuantos elementos habra en su arreglo?: "; cin >> n; 
    for(int i = 0 ; i < n ; i++){
        cout<<"Ingrese el dato ["<<i+1<<"] del arreglo: "; cin>> arreglo[i];
    }
    t = sizeof(arreglo) / sizeof(arreglo[0]); 
    cout<<"Ingrese elemento a buscar : "; cin>> elemento ;  
    index = BusquedaBinaria(arreglo,0,t-1,elemento); 
    if(index == -1 ){
        cout<<"Elemento no encontrado" ; 
    }
    else{
        cout<<"Elemento encontrado en la posicion: "<< index ; 
    }
    cout<<endl;
}
