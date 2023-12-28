#include<stdio.h>

// struct person{
//     double salary;
//     int age;
// };

// int main() {
//     struct person person1;
    

//     person1.age = 25;
//     person1.salary = 44.48;

//     printf("age of person1:  %d", person1.age);
//     printf("age of person1:  %d", person1.salary);

// }








// int main() {
//     struct person person1 = {.age = 25, .salary = 444.55};
//     struct person person2 = {.age = 28, .salary = 440.55};
    

    

//     printf("age of person1:  %d\n", person1.age);
//     printf("age of person1:  %.2lf", person1.salary);

//         printf("age of person1:  %d\n", person2.age);
//     printf("age of person1:  %.2lf", person2.salary);

// }







struct person{
    double salary;
    int age;
}person1,person2;


int main() {
    
    person1.age = 25;
    person2.salary = 77776.87;

    person2.age = 25;
    person2.salary = 77776.89;

    

    printf("age of person1:  %d\n", person1.age);
    printf("age of person1:  %.2lf", person1.salary);

    printf("age of person1:  %d\n", person2.age);
    printf("age of person1:  %.2lf", person2.salary);

}