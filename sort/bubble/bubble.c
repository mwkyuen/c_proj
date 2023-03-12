#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int MAX_NUM = 99;
int MIN_NUM = 0;

void Swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    srand(10);
    int arr_len = 10;
    // int sorting_arr[] = {3, 2, 4, 15, 6, 19, 7, 9, 21, 13};
    int sorting_arr[arr_len];


    // Fill array with random numbers
    for (int i=0; i<arr_len; i++) {
        int val = rand() % (MAX_NUM + 1 - MIN_NUM) + MIN_NUM;
        sorting_arr[i] = val;
    }

    printf("Before bubble sort: \n");
    for (int i=0; i<arr_len; i++) {
        printf("%d \n", sorting_arr[i]);
    }

    // Bubble sort
    bool swapped = true;
    while (swapped) {
        swapped = false;
        for (int i=0; i<arr_len-1; i++) {
            if (sorting_arr[i] > sorting_arr[i+1]) {
                Swap(&sorting_arr[i], &sorting_arr[i+1]);
                swapped = true;
            }
        }
    }
    

    printf("After bubble sort: \n");
    for (int i=0; i<arr_len; i++) {
        printf("%d \n", sorting_arr[i]);
    }

    return 0;
}