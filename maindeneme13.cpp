#include<stdio.h>
int main () {
	//kullanýcýdan alýnan iki sayi arasýndaki sayýlarý toplayan programlama
	//for döngüsü ile
	
	int sayi1,sayi2,i,toplam=0 ;
	
	printf("Birinci sayiyi giriniz :") ;
	scanf ("%d ", &sayi1) ;
	printf("ikinci sayiyi giriniz :") ;
	scanf ("%d" ,&sayi2) ;
	
	for (i=sayi1+1 ; i<sayi2 ; i++ ) { //girilen iki sayi dahil deðil
	toplam=toplam+i ;
	
	}
	
	printf ("sonuc : %d" , toplam ) ;
	
}
