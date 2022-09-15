//
// Created by Gabriele Scannagatti on 15/09/22.
//

#include "stdsort.h"

void selection_sort(int* arr, int size){
    for(int i = 0; i<size; i++) {
        int min = i;
        for(int j = i + 1; j<size; j++) {
            if(arr[j]<arr[min]) {
                min = j;
            }
        }
        if(min != i) {
            int tmp = arr[i];
            arr[i] = arr[min];
            arr[min] = tmp;
        }
    }
}

void insertion_sort(int* arr, int size) {
    for(int j=1;j<size; j++) {
        int key = arr[j];
        int i = j - 1;
        while(i>=0 && arr[i] > key) {
            arr[i+1] = arr[i];
            i--;
        }
        arr[i+1] = key;
    }
    return;
}