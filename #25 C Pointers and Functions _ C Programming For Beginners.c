#include<stdio.h>

// void findValue(int* num) {
//     *num = 39;
// }






// void findsqure(int* number) {
//     int square = *number + *number;
//     *number = square; 
// }


//  int main() {
//     int number = 22;

//     findsqure(&number);

//     printf("number: %d ", number);

// }









//  int main() {
// //     int number = 22;

// //     findValue(&number);

// //     printf("number: %d ", number);





// }











// int* findsqure(int* number) {
//     int square = *number + *number;
//     *number = square; 

//     return number;
// }


//  int main() {
//     int number = 22;

//    int* result = findsqure(&number);


//     printf("result : %d ", result);

// }







int* addNumber(int* num1, int* num2, int* sum) {
    *sum = *num1 + *num2;
    

    return sum;
}


 int main() {
    int sum;
    int number1 = 22;
    int number2 = 25;

   int* result = addNumber(&number1, &number2, &sum);


    printf("Sum is : %d ", result);

}