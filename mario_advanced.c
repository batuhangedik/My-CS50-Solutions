#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int number;
    do{
    number = get_int("Height: ");
    }while(number<1 || number>8);

    for(int i =1;i<=number;i++){
        
        for(int j=0;j<number-i;j++)
        {
            printf(" ");
        }
        for(int k=0;k<i;k++){
                printf("#");
        }
        printf("  ");
        for(int x=0;x<i;x++){
            printf("#");
        }
        printf("\n");
    }

}