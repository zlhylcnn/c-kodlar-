#include<stdio.h>

int main () {
	
	//kullanýcýdan alýnan harfin sesli olup olmadýðýný  bulan program 
	int karakter , seslimi =0 ;
	printf ("klavyeden bir sayi giriniz : ") ;
	scanf ("%c" ,&karakter ) ;
char sesli [] = {'a','A','e','E','I','i','o','O','u','Ü'} ;
	
	for (int i=0 ; i<10 ; i++ ) {
		if (karakter == sesli [i] ) {
			seslimi++  ;
			break // break komutu yapýyý sonlandýrýr    
			;
			
	 }
	}
 
if( seslimi != 0) 
	   printf("%c harfi sesli bir harftir."karakter ) ;
	   else 
	   printf("%c harfi sesli bir harf deðildir.." ,karakter ) ;
	   
}
