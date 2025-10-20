#include <iostream>
using namespace std;


// Calling bubble sort by reference since its an array.
void bubble_sort(int arr[], int n){
    for(int i = n - 1; i >= 0; i--){
        for(int j = 0; j < n - 1; j++){
            if(arr[j] > arr[j + 1]){
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}


// Implementing bubble sort by reference using pointers.
void bubble_sort_ptr(int* arr, int n){
    for(int i = n - 1; i >= 0; i--){
        for(int j = 0; j < n - 1; j++){
            if(*(arr + j) > *(arr + j + 1)){
                int temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
    }
}


// Recursive Implementation
void bubble_sort_recursive(int arr[], int n){    
    if ( n < 1){
        int x = 0;
    } else {
        int i = 0;
        while (i < n - 1){ 
            if(*(arr + i) > *(arr + i + 1)){
                int temp = *(arr + i);
                *(arr + i) = *(arr + i + 1);
                *(arr + i + 1) = temp;
            }
            i++;
        }
        bubble_sort_recursive(arr, n - 1);
    }
}

int main(){
    int num[] = {13,24,46,20,9,52};
    int n = sizeof(num) / sizeof(num[0]);

    bubble_sort_recursive(num, n);

    for(int i = 0; i < n; i++){
        cout << num[i] << endl;
    }

    return 0;
}