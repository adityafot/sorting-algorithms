#include <stdio.h>

void selection_sort(int arr[], int arr_length) {
    for (int i = 0; i < arr_length - 1; i++) {
        int min_index = i;
        for (int j = i + 1; j < arr_length; j++) {
            if (arr[j] < arr[min_index]) {
                min_index = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = temp;
    }
    for(int i=0;i<arr_length;i++) {
        printf("%d ",arr[i]);
    }
    return;
}

int main() {
    int a[] = {1,4,2,7,8,21,2};
    int a_length = sizeof(a) / sizeof(a[0]);
    selection_sort(a, a_length);
    return 0;
}