#include<stdio.h>
int main () {
	//kullan�c�dan al�nan iki sayinin arasindaki sayilrin toplam�n� bulan progrm
	//while d�ng�s� ile
	int sayi1,sayi2,i,toplam=0 ;
	
	
	printf ("Birinci sayiyi giriniz :") ;
	scanf ("%d" ,&sayi1) ;
	printf ("ikinci sayiyi giriniz :") ;
	scanf ("%d" ,&sayi2) ;
	
	
	i=sayi1+1 ;
	while (i<sayi2)  { //girilen iki sayi dahil de�il
	toplam =toplam+i ;
	i++ ;
	
		
	
} 
printf("sonuc: %d " , toplam ) ;

}
 
