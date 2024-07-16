#include <stdio.h>

int main() {
    int arr[] = {2, 4, 6, 8, 10, 12, 14, 16};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("size= %d\n",size);

    int key = 16;
    int low = 0;
    int high = size - 1;
    printf("high= %d\n",high);
    int mid;
    int found = 0; // Flag to indicate if the key is found

    while (low <= high) {
        mid = low + (high - low) / 2;
        printf("mid=%d ",mid);

        // Check if the key is present at mid
        if (arr[mid] == key) {
            printf("Element %d found in arr mid == key at index %d.\n", key, mid);
            found = 1; // Set the found flag
            break;
        }

        // If the key is greater, ignore the left half
        if (  key > arr[mid]) {
            low = mid + 1;
            printf("\n after  ignoraing left half low %d = \n",low);
        }
        // If the key is smaller, ignore the right half
        else {
            high = mid - 1;
        }
    }

    // If the key was not found
    if (!found) {
            printf("found = %d",found);
        printf("Element %d not found in the array.\n", key);
    }

    return 0;
}
