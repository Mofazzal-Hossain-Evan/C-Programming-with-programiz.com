/*
int (4 bytes) | %d for printing
double (8 bytes) | %if for printing
float (4 bytes)   | %f for printing
char (1 byte)      %c for printing
*/

#include <stdio.h>

int main() {

    // int age = 10;
    // printf(" Age = %d" , age);
    // 

    double number = 12.46;
    float number1 = 11.8f;
    printf("%.2If" , number);
    printf("%f" , number1);

    return 0;

}