#include <iostream>

using namespace std;

int partition(int arr[], int low, int high){
    int pivot = arr[high];
    int i = low-1;
    for (int j=low; j<high; j++){
        if (arr[j] < pivot){
            i++;
            int temp = arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
        i++;
        int temp = arr[i];
        arr[i] = pivot;
        arr[high] = temp;
        return i;
    
}

quickSort(int arr[], int low, int high){
    if (low < high){
        int pidex = partition(arr, low, high);
    
    quickSort(arr, low, pidex-1);
    quickSort(arr, pidex+1, high);
    }
}

int main(){
    int arr[]={6,3,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    quickSort(arr, 0, n-1);
    for (int i=0; i<n; i++){
       cout<<arr[i]<<" ";
    }
    return 0; 
}