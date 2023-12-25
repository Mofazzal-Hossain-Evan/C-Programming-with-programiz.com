#include <stdio.h>

int main() {

    // for (int i=1; i <=5; i++) {

    //     if(i==3){
        
    //     break;
    //     }
    //     printf("%d\n", i);
    //     //printf("after the b");
    // }



    while(1) {
        int number;
        printf("enter a number: ");
        scanf("%d", &number);

        if(number<= 0) {
            break;
        }
        printf("%d\n", number);
    
//int number;

     for(int i=1; i<=5; i++) {
        if (i == 3) {
            continue;
        }

        if((number % 2 ) != 0) {
           continue; 
        }

        printf("%d\n", i);
     }
}


    return 0;
}