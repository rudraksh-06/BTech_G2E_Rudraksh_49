#include <stdio.h>

int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) { 
        if (arr[i] == target) {
            return i;             
        }
    }
    return -1; 
}

int main() {
    int array[] = {10, 20, 30, 40, 50, 60, 70};
    int target = 40;

    int size = sizeof(array) / sizeof(array[0]);

    int result = linearSearch(array, size, target);

    if (result != -1) {
        printf("Element %d is present at index %d.\n", target, result);
    } else {
        printf("Element %d is not present in the array.\n", target);
    }

    return 0;
}
