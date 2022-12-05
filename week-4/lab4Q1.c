#include <stdio.h>
#include <stdlib.h>
int factorial (int);
/* Kullanici tarafindan girilen bir sayisinin verilen
örnekteki gibi her rakamin faktöriyelinin toplaminin
sayinin kendisine esit olup olmadigini kontrol ediniz.*/

int main() {
	int x;
	printf("Enter a number: \n");
	scanf("%d",&x);
	
	printf("%d factorial: %d\n",x,factorial(x));
	return 0;
}

int factorial(int n){
	int i,temp=1;
	
	for(i=1; i<=n; i++){
		temp *=i;
	}return temp;
}
