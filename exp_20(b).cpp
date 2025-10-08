//Siddhi Bajpai
//24070123109
//B1
//Implementation of Insertion Sort

#include<iostream>
using namespace std;
void insertionSort(int arr[], int n) {
    for (int i=1; i<n; i++) {
        int key=arr[i];
        int j=i-1;
        while (j>=0&&arr[j]>key) {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1] =key;
    }
}
int main() {
    int arr[] = {6, 5, 1, 2, 13, 8};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Original array: ";
    for (int i=0; i<n; i++) {
        cout<<arr[i] <<" ";
    }
    insertionSort(arr, n);
    cout<<"\nSorted array: ";
    for (int i=0; i<n; i++) {
        cout<<arr[i] <<" ";
    }
    return 0;}

//Output:
//Original array: 6 5 1 2 13 8
//Sorted array: 1 2 5 6 8 13
