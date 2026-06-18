//Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

#include <stdio.h>

void main(){
    int a, b, sum, diff, pro, div;

    printf("Enter two number: ");
    scanf("%d %d", &a, &b);

    sum = a + b;
    diff = a - b;
    pro = a * b;

    printf("Sum=%d\nDiff=%d\nProduct=%d", sum, diff, pro);
    if (b != 0)
    {
        div = a / b;
        printf("\nṇQuotient=%d", div);
    }else{
        printf("\nYou cannot divide by zero");
}
}