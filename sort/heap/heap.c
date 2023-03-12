#include <stdio.h>

int size = 0;

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void heapify(int array[], int size, int i) {

    int largest = i;
    int left_child = 2 * i + 1;
    int right_child = 2 * i + 2;
    

    if (left_child < size && array[left_child] > array[largest]) {
        largest = left_child; 
    }
    if (right_child < size && array[right_child] > array[largest]) {
        largest = right_child;
    }
    if (largest != i) {
        swap(&array[i], &array[largest]);
        heapify(array, size, largest);
    }
    
}

void insert(int array[], int val) {

    if (size == 0) {
        array[size] = val;
        size += 1;
    } else {
        array[size] = val;
        size += 1;
        for (int i=(size / 2 - 1); i >= 0; i--) {
            heapify(array, size, i);
        }
    }
    
}


int main() {

    int sorting_arr[10];
    // int n = sizeof(sorting_arr) / sizeof(sorting_arr[0]);

    insert(sorting_arr, 3);
    insert(sorting_arr, 9);
    insert(sorting_arr, 2);
    insert(sorting_arr, 1);
    insert(sorting_arr, 4);
    insert(sorting_arr, 5);
    insert(sorting_arr, 7);

    // printf("%d\n", size);
    for (int i=0; i<size; i++) {
        printf("%d\n", sorting_arr[i]);
    }

    return 0;
}