#include<stdio.h> 

int main() {
    int number[5] = {1,2,3,4,5};

    // for (int i = 0; i<5; i++) {
    //     //printf("%d = %p\n", number[i], &number[i]);
    //     printf("%d = %p\n", *(number +i ), number+i);
    // }



    // printf("Array address of 1: %p\p", number);
    // printf("Array address of 1: %p\p", number +1 );
    // printf("Array address of 1: %p\p", number + 2);


    int numbers[5] = {1,2,3,4,5};

    *number = 2;
    *(number + 4) = 4;

    printf("first element: %d", *(numbers+3));




}