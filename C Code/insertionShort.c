
#include <stdio.h>

int main() {
    int arr[] = {12, 11, 13, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("Size = %d\n",size);

    // Insertion sort algorithm
    for (int i = 1; i < size; i++) {
        int key = arr[i];
        printf("Key = %d\n",arr[i]);
        int j = i - 1;
        printf("for Value  of j = %d\n",j);

        /* Move elements of arr[0..i-1], that are greater than key,
         to one position ahead of their current position
         */
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
              printf("While Value  of j = %d\n",j);
        }
        arr[j + 1] = key;
        printf("arr[%d+ 1]=%d \n",j,key);
    }

    // Print the sorted array
    printf("Sorted array: \n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
