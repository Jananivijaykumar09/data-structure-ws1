/*Write a C program to read in two numbers, x and n, and then compute the sum of this geometric progression: 1+x+x2+x3+………….+xn
For example: if n is 3 and x is 5, then the program computes 1+5+25+125. Print x, n, the sum.
*/
#include <stdio.h>
#include <math.h>

int main() {
    int x, n;
    printf("Enter the value of x: ");
    scanf("%d", &x);
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int sum = 0;
    int gp = 1; 
    for (int i = 0; i <= n; i++) {
        sum += gp;
        gp *= x;
    }

    printf("x: %d\n", x);
    printf("n: %d\n", n);
    printf("Sum: %d\n", sum);

    return 0;
}
