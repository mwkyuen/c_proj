#include <stdio.h>

void Swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int arr_len = 8;
    int sorting_arr[] = {6, 5, 3, 1, 8, 7, 2, 4};

    printf("Before insertion sort: \n");
    for (int i=0; i<arr_len; i++) {
        printf("%d \n", sorting_arr[i]);
    }

    // Insertion sort
    int temp;
    int curr_val;

    for (int i=0; i<arr_len; i++) {
        curr_val = sorting_arr[i];
        for (int j=i; j>0; j--) {
            if (curr_val < sorting_arr[j-1]) {
                // Swap(&sorting_arr[j-1], &curr_val);
                temp = sorting_arr[j-1];
                sorting_arr[j-1] = curr_val;
                sorting_arr[j] = temp;
            }
        }
    }

    printf("After insertion sort: \n");
    for (int i=0; i<arr_len; i++) {
        printf("%d \n", sorting_arr[i]);
    }

    return 0;
}