#include <stdio.h>
#include <stdlib.h>

long factorial(long);
/* •Klavyeden girilen bir sayi parametre alarak
faktöriyelini hesaplayip döndüren fonsiyonu ve testini
C dili ile yaziniz */

int main() {
	int i;
	
	for(i=1; i<=10; i++){
		printf("%2d! = %1d\n",i,factorial(i));
	}
	return 0;
}

long factorial(long number){
	if(number<=1){
		return 1;
	}else{
		return (number * factorial (number - 1));
	}
}
