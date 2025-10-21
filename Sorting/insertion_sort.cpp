#include <iostream>
using namespace std;


// Calling Insertion sort by reference since its an array.
void insertion_sort(int arr[], int n){
    for(int i = 1; i < n; i++){
        for(int j = i; j > 0 ; j--){
            if (arr[j] < arr[j - 1]){
                int temp = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = temp;
            }
        }
    }
}


// Implementing insertion sort by reference using pointers.
void insertion_sort_ptr(int* arr, int n){
    for(int i = 1; i < n; i++){
        for(int j = i; j > 0 ; j--){
            if (*(arr + j) < *(arr + j - 1)){
                int temp = *(arr + j);
                *(arr + j) = *(arr + j - 1);
                *(arr + j - 1) = temp;
            }
        }
    }
}

// Recursive Implementation of insertion sort.
void insertion_sort_recursive(int arr[], int n, int i = 1){
    if(i >= n){
        return;
    } else {
        for(int j = i; j > 0; j--){
            if(*(arr + j) < *(arr + j - 1)){
                int temp = *(arr + j);
                *(arr + j) = *(arr + j - 1);
                *(arr + j - 1) = temp;
            }
        }
        insertion_sort_recursive(arr, n, i + 1);
    }
}



int main(){
    int num[] = {13,46,24,52,20,9};
    int n = sizeof(num) / sizeof(num[0]);

    insertion_sort_recursive(num,n);
    for(int i = 0; i < n; i++){
        cout << num[i] << endl;
    }
    return 0;
}