#include <stdio.h>
#include <stdlib.h>

/*
Switch-Case yapisi kullanarak, klavyeden girilen 2 
sayidan 1. ikinciden büyükse ve iki sayinin toplami
pozitifse ekrana «kullanilabilir» bu sartlardan herhangi
biri saglanmiyorsa «kullanilamaz» mesajini ekrana
yazdiran programi yapiniz.
*/

int main() {
	int value1;
	int value2;
	
	printf("Enter a value :\n");
	scanf("%d", &value1);
	printf("Enter a second value : \n");
	scanf("%d", &value2);
	
	switch (value1>value2 && value1+value2>0)
    {
    case 1:
        printf("kullanilabilir");
        break;
    case 0:
        printf("kullanilamaz");
        break;
    default:
        printf("Bunlarin disinda");
        break;
    }
	
	return 0;
}
