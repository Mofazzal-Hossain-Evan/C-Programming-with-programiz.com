#include<stdio.h>

int main() {

    // int arr[2][3] ={ {1,2,3}, {4,5,6} };

    // arr[0][2] = 7;
    // arr[1][1] = 8;

    // printf("%d\n", arr[0][2]);
    // printf("%d\n", arr[1][1]);


    int arr[2][3] ={ {1,2,3}, {4,5,6} };

     for(int i = 0; i<2; i++) {
        for(int j = 0; j<3; j++) {
         printf("%d \n", arr[i][j]);
        }
         printf("\n");
     }


    

}