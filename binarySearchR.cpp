#include <iostream>
using namespace std;

void binarySearch(int arr[], int first, int last, int key){
    if (first == last){
       if (key == arr[first]){
        cout<<"Item is found at index: "<<first;
        return;
       }else{
        cout<< "Not found";
        return;
       }
    }

    int mid = (first+last)/2;
    if (key == arr[mid]){
        cout<<"Item is found: "<<mid;
        return;
    }else{
        if (key < arr[mid]){
            binarySearch(arr, first, mid-1, key);
        } else {
            binarySearch(arr, first + 1, last, key);
        }
    }
}

int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};
    int key = 4;
    int length = sizeof(arr)/ sizeof(arr[0]);
    binarySearch(arr, 0, length, key);
    return 0;
}