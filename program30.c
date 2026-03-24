#include <stdio.h>

#define MAX 10

int main() {
    int n, a[MAX][MAX], b[MAX][MAX], sum[MAX][MAX], prod[MAX][MAX];

    printf("Enter size (n<=%d): ", MAX); //
    scanf("%d", &n);

   
    printf("Enter Matrix A:\n");
    for(int i=0; i<n; i++) for(int j=0; j<n; j++) scanf("%d", &a[i][j]);
    printf("Enter Matrix B:\n");
    for(int i=0; i<n; i++) for(int j=0; j<n; j++) scanf("%d", &b[i][j]);

    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            sum[i][j] = a[i][j] + b[i][j]; 
            prod[i][j] = 0;
            for(int k=0; k<n; k++) prod[i][j] += a[i][k] * b[k][j]; 
        }
    }
    printf("\nSum:\n");
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) printf("%d ", sum[i][j]);
        printf("\n");
    }
    printf("\nProduct:\n");
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) printf("%d ", prod[i][j]);
        printf("\n");
    }
    return 0;
}
