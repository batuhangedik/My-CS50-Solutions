#include <stdio.h>
#include <cs50.h>
#include <math.h>
int main(void)
{   
    float cash = 0 ;
    int counter =0;
    do{
        cash = get_float("Para Üstü?");
    }while(cash<0);
  
   int cents = round(cash*100);
   //printf("%d\n",cents);
     while(cents>=25){
         cents-=25;
         counter++;
     }
     while(cents>=10){
         cents-=10;
         counter++;
     }
     while(cents>=5){
         cents-=5;
         counter++;
     }
     while(cents>=1){
         cents-=1;
         counter++;
     }
      printf("%d \n",counter); 
}