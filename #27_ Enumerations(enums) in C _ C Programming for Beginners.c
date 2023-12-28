#include<stdio.h>


enum size{

    small = 22,
    medium = 44,
    large = 77,
    Exlarge =44
    
};

enum size shoeSize1= small ;
enum size shoeSize2= medium;
enum size shoeSize3= large ;


///shoeSize = large;

int main() {
printf("%d\n", shoeSize1);
printf("%d\n", shoeSize2);
printf("%d\n", shoeSize3);
//printf("%d\n", shoeSize4);
}