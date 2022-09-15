//
// Created by Gabriele Scannagatti on 15/09/22.
//
#include <stdio.h>
#include "Sorting_Algo/stdsort.h"
#include "utility/utils.h"

int main(void) {
    int arr[] = {45 ,7,23,77,12,0,344,99};
    printf("Array Size: %d\n", sizeOfArr(arr));
    print_array(arr, sizeOfArr(arr));
    insertion_sort(arr, sizeOfArr(arr));
    print_array(arr, sizeOfArr(arr));
    return 0;
}
