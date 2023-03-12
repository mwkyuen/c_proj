#include <stdio.h>

void Swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int arr_len = 10;
    int sorting_arr[] = {8, 5, 2, 6, 9, 3, 1, 4, 0, 7};

    printf("Before selection sort: \n");
    for (int i=0; i<arr_len; i++) {
        printf("%d \n", sorting_arr[i]);
    }

    // Selection sort
    int min_val;
    int min_ptr;

    for (int curr_ptr=0; curr_ptr<arr_len; curr_ptr++) {
        min_val = sorting_arr[curr_ptr];
        min_ptr = curr_ptr;
        for (int var_ptr=curr_ptr+1; var_ptr<arr_len; var_ptr++) {
            if (sorting_arr[var_ptr]<min_val) {
                min_val = sorting_arr[var_ptr];
                min_ptr = var_ptr;
            }
        }
        Swap(&sorting_arr[curr_ptr], &sorting_arr[min_ptr]);

    }
    

    printf("After selection sort: \n");
    for (int i=0; i<arr_len; i++) {
        printf("%d \n", sorting_arr[i]);
    }

    return 0;
}