//
// Created by Gabriele Scannagatti on 15/09/22.
//
#include <stdio.h>
#include "utils.h"

void print_array(int *arr, int size) {
    for(int i = 0; i<size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return;
}
