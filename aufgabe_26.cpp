#include <iostream>
//#include "arrayPrinter.h"
#define SWAP(arr, n) \
    for(int i = 0;  i < n - 1; i++) { \
        for(int j = 0; j < n - 1; j++) { \
            if(arr[j] > arr[j + 1]) { \
                int tmp = arr[j + 1]; \
                arr[j + 1] = arr[j]; \
                arr[j] = tmp; \
            } \
        } \
    }

int main() {
    using namespace std;
    int a;
    int arrayA[5];
    cout << "please insert 5 integers: ";
    for(int i = 0; i < 5; i ++){
        cin >> a;
        arrayA[i] = a;
    }
    cout << "unsorted Array" << endl;
    for (int i = 0; i < 5; i ++) {
        std::cout << arrayA[i] << " ";
    }
    cout << endl;

    // Bubble Sort
    SWAP(arrayA, 5);
    cout << "sorted Array" << endl;
    for (int i = 0; i < 5; i ++) {
        std::cout << arrayA[i] << " ";
    }
    cout << endl;

    // Median
    int size = sizeof(arrayA[0]);
    int median = size / 2;
    cout << arrayA[median] << endl;

    system("pause");
    return 0;
}