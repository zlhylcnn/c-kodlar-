#include<stdio.h>
int main () {
	//kullan�c�dan al�nan iki sayi aras�ndaki say�lar� toplayan programlama
	//for d�ng�s� ile
	
	int sayi1,sayi2,i,toplam=0 ;
	
	printf("Birinci sayiyi giriniz :") ;
	scanf ("%d ", &sayi1) ;
	printf("ikinci sayiyi giriniz :") ;
	scanf ("%d" ,&sayi2) ;
	
	for (i=sayi1+1 ; i<sayi2 ; i++ ) { //girilen iki sayi dahil de�il
	toplam=toplam+i ;
	
	}
	
	printf ("sonuc : %d" , toplam ) ;
	
}
