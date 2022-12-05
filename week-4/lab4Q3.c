#include <stdio.h>
#include <stdlib.h>

/* Kullanici tarafindan girilen bir n sayisi kadar asagidaki
açilimi gösteren ve sonucu yazan programi fonksiyon
ile yaziniz.
• Örnek:
• N=6
• 1 + 11 + 111 + 1111 + 11111 + 111111
• Toplam: 123456
*/

int main() {
	int x;
	printf("Enter a number\n");
	scanf("%d",&x);
	
	printf("Total: %d",something(x));
	return 0;
}

int something(int count){
	int add = 1;
	int i;
	int temp = 1;
	for(i = 1; i<=count; i++){
		temp = ((temp*10)+1);
		add = temp + add;
	}return add;
}
