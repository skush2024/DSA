# include <iostream>
using namespace std;



void quick_sort(int arr[], int low, int high){ 
    if (low >= high){
        return;
    }

    int pivot = arr[low];

    int i = low + 1;
    int j = high;

    while(i < j){
        while(i <= high && arr[i] < pivot){
            i++;
        }
        while(j >= low + 1 && arr[j] > pivot){
            j--;
        }

        if(i < j){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp; 
        }
        
    }

    int temp = arr[j];
    arr[j] = pivot;
    arr[low] = temp;

    quick_sort(arr, low, j - 1);
    quick_sort(arr, j + 1, high);
        
}







int main(){
    int num[] = {13,24,46,20,9,52};
    int n = sizeof(num) / sizeof(num[0]);

    quick_sort(num, 0,n - 1);

    for(int i = 0; i < n; i++){
        cout << num[i] << endl;
    }


    return 0;
}