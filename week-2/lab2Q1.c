#include <stdio.h>

//Kullanici tarafindan girilen bir sayinin tersinin kendisine esit olup olmadigini gösteren programi yaziniz.

int main(){

    int number,temp;
    int reversedNumber=0;
    
    printf("Enter Number:");
    scanf("%d",&number);
    temp=number;
    while(temp>0){
        reversedNumber= (reversedNumber*10)+(temp%10);  
        temp/=10;
    } 
    if(reversedNumber==number)
        printf("palindrom");
    else    
        printf("not palindrom");
}
