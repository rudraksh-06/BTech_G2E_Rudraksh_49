#include <stdio.h>

int main() {
    int size, i;

    printf("Enter the number of elements in the arrays: ");
    scanf("%d", &size);

    int array1[size], array2[size], sum_array[size];

    printf("Enter elements of the first array:\\n");
    for (i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &array1[i]);
    }

    printf("Enter elements of the second array:\\n");
    for (i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &array2[i]);
    }

    for (i = 0; i < size; i++) {
        sum_array[i] = array1[i] + array2[i];
    }

    printf("\\n--- Array Contents ---\\n");
    printf("Array 1: ");
    for (i = 0; i < size; i++) {
        printf("%d ", array1[i]);
    }

    printf("\\nArray 2: ");
    for (i = 0; i < size; i++) {
        printf("%d ", array2[i]);
    }

    printf("\\nSum Array: ");
    for (i = 0; i < size; i++) {
        printf("%d ", sum_array[i]);
    }
    
    printf("\\n");

    return 0;
}
