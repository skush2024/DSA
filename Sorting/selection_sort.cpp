#include <iostream>
using namespace std;


// Calling selection sort by reference since its an array.
void selection_sort(int arr[], int n){
    for(int i = 0; i < n; i++){
        int min_index = i;
        for(int j = i; j < n; j++){
            if(arr[min_index] > arr[j]){
                min_index = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = temp;
    }
}


// Implementing selection sort by reference using pointers.
void selection_sort_ptr(int* arr, int n){
    for(int i = 0; i < n; i++){
        int min_index = i;
        for(int j = i; j < n; j++){
            if(*(arr + j) < *(arr + min_index)){
                min_index = j;
            }
        }
        int temp = *(arr + i);
        *(arr + i) = *(arr + min_index);
        *(arr + min_index) = temp;
    }



}


int main(){
    int num[] = {13,46,24,52,20,9};
    int n = sizeof(num) / sizeof(num[0]);

    selection_sort_ptr(num,n);
    for(int i = 0; i < n; i++){
        cout << num[i] << endl;
    }

    return 0;
}