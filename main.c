#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main () {

    char operator = '\0';
    int valid = true; // vaild is checking if the operation is correct
    double num1 = 0.0;
    double num2 = 0.0;
    double result = 0.0;

    printf("Welcome To The Calculater Program!\n");
    printf("Enter Number 1: ");
    scanf("%lf", &num1);
    
    printf("Enter an operator: ");
    scanf(" %c", &operator);

    printf("Enter Number 2: ");
    scanf("%lf", &num2);

    switch (operator) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 == 0) {
                printf("You Can't Devide By Zero!\n");
                valid = false;
            } else {
                result = num1 / num2;
            }
            break;
        default:
            printf("You have to choose one of those: (+ - / *)\n");
            valid = false;
            break;
    }
    // checking if the operation is true
    if (valid) {
            printf("The result is: %.4lf", result);
    }

    return 0;
}



    