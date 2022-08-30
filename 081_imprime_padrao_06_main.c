#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("CASO (f): \n \n");

    for (int j=0;j<8;j++) {
        for(int i=0;i<8;i++){
            if((i==j)||(j==0 || j==7)) {
                printf(" # ");
            }else {
                printf("   ");
            }
        }
        printf("\n");
    }
    return 0;
}
