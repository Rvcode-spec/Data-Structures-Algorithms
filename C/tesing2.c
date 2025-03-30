#include <stdio.h>

int main() {
    int arr[5]; // Declare an array of size 5
    int i;

    // Taking input using a loop
    printf("Enter 5 numbers:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &arr[i]); // Store user input in array
    }

    // Displaying array elements using a loop
    printf("You entered: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", arr[i]); // Print array elements
    }

    return 0;
}
