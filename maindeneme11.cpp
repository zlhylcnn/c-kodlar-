#include<stdio.h>

int main () {
	
	//kullan�c�dan al�nan harfin sesli olup olmad���n�  bulan program 
	int karakter , seslimi =0 ;
	printf ("klavyeden bir sayi giriniz : ") ;
	scanf ("%c" ,&karakter ) ;
char sesli [] = {'a','A','e','E','I','i','o','O','u','�'} ;
	
	for (int i=0 ; i<10 ; i++ ) {
		if (karakter == sesli [i] ) {
			seslimi++  ;
			break // break komutu yap�y� sonland�r�r    
			;
			
	 }
	}
 
if( seslimi != 0) 
	   printf("%c harfi sesli bir harftir."karakter ) ;
	   else 
	   printf("%c harfi sesli bir harf de�ildir.." ,karakter ) ;
	   
}
