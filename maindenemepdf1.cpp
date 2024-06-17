#include<stdio.h>

// if yapýlarýný karþýlaþtuýrma ve eþitlik operatörlrini kullanmak 

int main () {
	int sayi1;
	int sayi2;
	printf("iki tamsayi girin : \n");
	printf("Bu iki sayinin karsilastirmasi yapilacaktir... ");
	scanf("%d%d",&sayi1,&sayi2); //iki tamsayi okuma
	if(sayi1==sayi2) {
		printf("%d esittir %d\n",sayi1,sayi2);
		} /* if bitti */
		
		if(sayi1!=sayi2) {
			printf("%d esit degil %d\n" , sayi1,sayi2);
			}
		if(sayi1<sayi2) {
			printf ("%d kucuk %d%\n" ,sayi1,sayi2);
			}
        if(sayi1>sayi2) {
        	printf ("%d buyuk %d\n" ,sayi1,sayi2);
        	}
        if(sayi1<=sayi2) {
        	printf("%d kucuk ya da esit %d\n" ,sayi1,sayi2);
			}
		if(sayi1>=sayi2) {
			printf("%d buyuk ya da esit %d\n" ,sayi1,sayi2);
	    	}
			return 0 ;	
}
