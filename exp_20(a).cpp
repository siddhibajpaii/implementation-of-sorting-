//Siddhi Bajpai
//24070123109
//B1
//Implementation of Bubble Sort using Pointers

#include<iostream>
using namespace std;


void swapValues(int* x, int* y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}


void bubbleSort(int* array, int size) {
    int pass = 0;
    int* nextElement;

    while (pass != size) {
        nextElement = array + 1;
        for (int i = 0; i < (size - 1) - pass; i++) {
            if (*array > *nextElement) {
                swapValues(array, nextElement);
            }
            nextElement++;
        }
        pass++;
        array++;
    }
}

int main() {
    int numElements;

    
    cout << "no. of elements: " << endl;
    cin >> numElements;

    int arr[numElements];


    cout << "Enter " << numElements << " elements:" << endl;
    for (int i = 0; i < numElements; i++) {
        cin >> arr[i];
    }

    
    cout << "Sorted Array: ";
    bubbleSort(&arr[0], numElements);
    for (int i = 0; i < numElements; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

//Output:
//no. of elements:
//4
//Enter 4 elements:
//10
//7
//4   
//2
//Sorted Array: 2 4 7 10
