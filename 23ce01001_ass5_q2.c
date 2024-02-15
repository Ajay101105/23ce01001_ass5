#include<stdio.h>
int main() {
    int x, y, q = 0, r = 0;

    printf("Enter dividend: ");
    scanf("%d", &x);

    printf("Enter divisor: ");
    scanf("%d", &y);

    while (x >= y) {
        x -= y;
        q++;
    }

    r = x;

    printf("Quotient = %d\n", q);
    printf("Remainder = %d\n", r);

    return 0;
}