#include <stdio.h>

int main() {
    int input;

    printf("Enter a number: ");
    scanf("%d", &input);

    if (input % 2 == 0)
        printf("Even Number\n");
    else
        printf("Odd Number\n");

    if (input > 0)
        printf("Positive Number");
    else if (input < 0)
        printf("Negative Number");
    else
        printf("Zero");

    return 0;
}
