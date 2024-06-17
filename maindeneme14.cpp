#include<stdio.h>
int main () {
	//kullanýcýdan alýnan iki sayinin arasindaki sayilrin toplamýný bulan progrm
	//while döngüsü ile
	int sayi1,sayi2,i,toplam=0 ;
	
	
	printf ("Birinci sayiyi giriniz :") ;
	scanf ("%d" ,&sayi1) ;
	printf ("ikinci sayiyi giriniz :") ;
	scanf ("%d" ,&sayi2) ;
	
	
	i=sayi1+1 ;
	while (i<sayi2)  { //girilen iki sayi dahil deðil
	toplam =toplam+i ;
	i++ ;
	
		
	
} 
printf("sonuc: %d " , toplam ) ;

}
 
