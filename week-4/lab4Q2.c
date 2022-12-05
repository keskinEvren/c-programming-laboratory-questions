#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* 20 - 80 arasi rastgele bir sayi üretip geri döndüren bir
fonksiyon yaziniz. Ana programda test ediniz.*/

int main() {
	random();
	
	return 0;
}

int random(){
	int i, lower, upper;
	lower = 20;
	upper = 80;
	srand(time(0));

	i=(rand() % (upper - lower + 1))+lower;
	return printf("%d",i);
	}

