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
    int n , t , r; 
    int arreglo[] = {2,4,5,9,12,15,16,23,29,51};
    cout<<"Ingrese elemento : "; cin>> n ;  
    t = sizeof(arreglo) / sizeof(arreglo[0]); 
    r = BusquedaBinaria(arreglo,0,t-1,n); 
    if(r == -1 ){
        cout<<"Elemento no encontrado" ; 
    }
    else{
        cout<<"Elemento encontrado en la posicion: " << r ; 
    }
    cout<<endl;
}
