#include <stdio.h>
int main() {
    int m, n, p, q;
    int i, j, k;

    printf("Enter rows of first matrix : ");
    scanf("%d", &m);
    printf("Enter columns of first matrix: ");
    scanf("%d", &n);


    printf("Enter rows of second matrix : ");
    scanf("%d", &p);
    printf("Enter columns of second matrix : ");
    scanf("%d", &q);

    if (n != p) {
        printf("\nMatrix multiplication not possible!");
        return 0;
    }

    int a[m][n], b[p][q], c[m][q];

    printf("\nEnter elements of first matrix:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nEnter elements of second matrix:\n");
    for (i = 0; i < p; i++) {
        for (j = 0; j < q; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            c[i][j] = 0;
        }
    }

    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            for (k = 0; k < n; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }


    printf("\nMatrix Multiplication Result:\n\n");

    for (i = 0; i < m; i++) {

        for (j = 0; j < n; j++) {
            printf("% d", a[i][j]);
        }

        printf("   *   ");

        for (j = 0; j < q; j++) {
            printf("% d", b[i][j]);
        }

        printf("   =   ");

        for (j = 0; j < q; j++) {
            printf("% d", c[i][j]);
        }

        printf("\n");
    }

    return 0;
}
