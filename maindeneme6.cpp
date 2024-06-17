#include<stdio.h>

int main () {

//negatif bir sayi girilene kadar girilen sayýlarý toplayan program


	int sayi ,toplam =0,i=0 ;
	
	while (i>=0) {
		toplam=toplam+i ;
		printf ("bir sayi girin:") ;
		scanf ("%d" , &i) ;
		
	}
	printf ("sonuc : %d" ,toplam ) ;
	
}
