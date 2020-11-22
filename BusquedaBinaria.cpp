#include<iostream>
using namespace std;

void swap(int* x, int* y){
    int aux = *x ;
    *x = *y; 
    *y = aux;
}

int partition(int arr[],int low, int high ){
    int pivot = arr[high];
    int i = (low-1);
    for(int j = low; j <= high - 1; j++){  
        if (arr[j] < pivot) {  
            i++; 
            swap(&arr[i], &arr[j]);  
        }  
    }  
    swap(&arr[i + 1], &arr[high]);  
    return (i + 1);  
}

void QuickSort(int A[], int low, int high){
   int pi;
   if(low<high){
       pi = partition(A,low,high);
       QuickSort(A, low, pi-1);
       QuickSort(A, pi+1, high);
   }
}

int busquedaBinaria(int A[],int left,int right, int x){
    if(right >= left){
        int mid = left+(right-left)/2;
        if(A[mid] == x ){
            return mid;
        }
        else{
            if(A[mid] > x){
                return busquedaBinaria(A, left , mid-1 , x);
            }
            else{
                return busquedaBinaria(A,mid+1,right,x);
            }
        }
    }
    return -1;
}

int main(){
    int n , elemento , index; // elemento = num que se busca , n = num de elementos, index = indice
    int arreglo[100]; //Array
    cout<<"Cuantos elementos habra en su arreglo?: "; cin >> n; 
    for(int i = 0 ; i < n ; i++){
        cout<<"Ingrese el dato ["<<i+1<<"] del arreglo: "; cin>> arreglo[i];
    }
    QuickSort(arreglo, 0, n);
    cout<<"Ingrese elemento a buscar : "; cin>> elemento;  
    index = busquedaBinaria( arreglo, 0, n-1, elemento); 
    if(index == -1 ){
        cout<<elemento<<" no encontrado" ; 
    }
    else{
        cout<<elemento<<" encontrado en la posicion: "<< index ; 
    }
    cout<<endl;
}
