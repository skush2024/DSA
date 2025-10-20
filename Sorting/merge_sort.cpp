#include <iostream>
using namespace std;


int* merge(int arr1[], int l1,  int arr2[], int l2){
    int a = 0, b = 0;

    int* result = new int[l1 + l2];
    int k = 0;


    while(a < l1 && b < l2){
        if (arr1[a] <= arr2[b]){
            result[k] = arr1[a];
            k++;
            a++;
        } else if (arr1[a] > arr2[b]){
            result[k] = arr2[b];
            k++;
            b++;
        }
    }

    while (a < l1){
        result[k] = arr1[a];
        k++;
        a++;
    }

    while(b < l2){
        result[k] = arr2[b];
        k++;
        b++;
    }

    return result;

}






int* mergeSort(int arr[], int start, int end){
    if(start == end){
        return &(arr[start]);
    } else {
        int mid = (start + end) / 2 ;
        int* lhead = mergeSort(arr, start, mid);
        int* rhead = mergeSort(arr, mid + 1, end);
        int* result = merge(lhead, mid - start + 1, rhead, end - mid);        
        return result;
        

    }
}







int main(){
    int num[] = {13,46,24,12,52,20,9};
    int n = sizeof(num) / sizeof(num[0]);

    int* result = mergeSort(num, 0, n - 1);
    for(int i = 0; i < n; i++){
        cout << *(result + i) <<endl;


    }


    return 0;
}