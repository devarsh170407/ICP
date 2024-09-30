#include <stdio.h>

int main() {
    int n, i = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Even numbers from 1 to %d:\n", n);

    while (i <= n) 
    {
        if (i % 2 == 0)
         {
            printf("%d ", i);
         }
        i++;
    }

    printf("\n");

    return 0;
}
