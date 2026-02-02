#include <stdio.h>

int main() {
    int a[5], i, min;

    // Read elements
    printf("Enter 5 elements:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
    }

    // Assume first element is the smallest
    min = a[0];

    // Compare with remaining elements
    for (i = 1; i < 5; i++) {
        if (a[i] < min)
            min = a[i];
    }

    printf("smallest element = %d", min);
    return 0;
}
