#include<stdio.h>
int main() {
    int n, i, k;
    printf("Enter Number: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i = i + 2)
    {
        for (k = 1; k <= (n - i) / 2; ++k)
        {
            printf(" ");
        }
        for (k = 1; k <= i; ++k)
        {
            printf("*");
        }
        printf("\n");
    }
    for (i = n / 2 + n / 2 - 1; i >= 1; i = i - 2)
    {
        for (k = 1; k <= (n - i) / 2; ++k)
        {
            printf(" ");
        }
        for (k = 1; k <= i; ++k)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
