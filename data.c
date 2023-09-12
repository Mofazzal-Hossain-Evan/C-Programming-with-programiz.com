#include <stdio.h>

int main() {
    int age;
    double height;

    printf("Enter age: ");
    scanf("%d", &age);

    printf("Enter the height: ");
    scanf("%lf", &height);
    

    printf("Age: %d\n", age);
    printf("Height: %lf\n", height);

    return 0;
}
