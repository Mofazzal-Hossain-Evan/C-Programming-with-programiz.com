#include<stdio.h>

int main() {

    //int age = 15;

    char operator = '+';
    int num1 = 4;
    int num2 = 6;
   // (age >= 18) ? printf("you can vote") : printf("you cant vote");

   int result = (operator == '+') ? (num1 + num2) : (num1 - num2);
   printf("%d", result);
    return 0;
}