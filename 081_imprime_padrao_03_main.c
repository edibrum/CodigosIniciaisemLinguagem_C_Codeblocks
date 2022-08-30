#include <stdio.h>
#include <stdlib.h>
/*CASO (c):*/
int main()
{
    printf("CASO (c): \n \n");

    for (int j=0;j<8;j++) {
        for(int i=0;i<8;i++){
            if(i<j) {
                printf("   ");
            }else {
                printf(" # ");
            }
        }
        printf("\n");
    }

    return 0;
}
