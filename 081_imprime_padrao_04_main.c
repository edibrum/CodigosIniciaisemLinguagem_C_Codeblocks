#include <stdio.h>
#include <stdlib.h>
/*CASO (d)*/
int main()
{
    printf("CASO (d): \n \n");

    for (int j=0;j<8;j++) {
        for(int i=0;i<8;i++){
            if((i+j)<7) {
                printf("   ");
            }else {
                printf(" # ");
            }
        }
        printf("\n");
    }

    return 0;
}