#include <stdio.h>

int* bubble_Sort(int arr[],int arr_length) {
    int temp=0;
    for(int i=0;i<arr_length-1;i++) {
        int flag=1;
        for(int j=0;j<arr_length-1-i;j++) {
            if(arr[j]>arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
            flag=0;
        }
        if(flag == 1)
            break;
    }
    return arr;
}

int main() {
    int a[]={4,5,78,21,6};
    int a_length=sizeof(a)/sizeof(a[0]);
    int* b=bubble_Sort(a,a_length);
    for(int i=0;i<a_length;i++) {
        printf("%d ",b[i]);
    }
} 