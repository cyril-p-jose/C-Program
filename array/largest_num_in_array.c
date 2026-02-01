#include <stdio.h>

int main() {
    int a[5], i, max;

    // Read elements
    printf("Enter 5 elements:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
    }

    // Assume first element is the largest
    max = a[0];

    // Compare with remaining elements
    for (i = 1; i < 5; i++) {
        if (a[i] > max)
            max = a[i];
    }

    printf("Largest element = %d", max);
    return 0;
}
