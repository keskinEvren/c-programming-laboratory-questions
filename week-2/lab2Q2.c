#include <stdio.h>

//Kullanici tarafindan girilen bir sayinin 1 dahil tam bölenlerinin toplami kendisine esit olup olmadigini kontrol ediniz


int main(){

    int number,sum=0;
    int i=1;

    printf("Enter Number:");
    scanf("%d",&number);

    while(i<number) {
        if(number%i==0)
            sum+=i;
            i++;
    }
    if(sum==number)
        printf("Okey");
    else
        printf("not Okey");    
}        
