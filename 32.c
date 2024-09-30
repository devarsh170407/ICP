#include <stdio.h>

int main() {
    int total = 0;

    for (int i = 1; i <= 10; i++) {
        if (i % 2 == 0) {
            total -= i; 
        } else {
            total += i; 
        }
    }

    printf("The total of 1 - 2 + 3 - 4 + 5 - 6 + 7 - 8 + 9 - 10 is: %d\n", total);
    return 0;
}
