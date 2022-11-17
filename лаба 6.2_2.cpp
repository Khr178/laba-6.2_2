// лаба 6.2_2.cpp 

#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

void print_array(int arr[], int size, int i) {
    if (i == size) {
        std::cout << std::endl;
        return;
    }

    std::cout << arr[i] << std::setw(4);
    i++;

    print_array(arr, size, i);
}


void reverse(int arr[], int size) {
    if (size <= 1) {
        return;
    }
    else {
        int temp;
        int i = 0;
        temp = arr[i];
        arr[i] = arr[size - 1];
        arr[size - 1] = temp;
        reverse(&arr[1], size - 2);
    }
}