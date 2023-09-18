#include<stdio.h>
#include<stdbool.h>

int main() {
    //bool value = true;
   // bool value2 = false;

   //bool value = (5 > 6);
   //bool value = (9 == 6);
   //bool value = ( 4 != 5);
   //bool value = (5 >= 6);

   int age = 18;
   double height = 6.3;
  
  bool result = (age >= 18) && (height > 6.0);  
    printf("%d\n", result);
    //printf("%d\n", value2);
    return 0;
}