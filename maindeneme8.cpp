#include<stdio.h>

int main () {
	
	//fakt�riyel hesaplama kodu
	
	int sayi , i , sonuc =1 ;
	
	printf ("faktoriyel alinmasini istediginiz sayi :");
	scanf ("%d" , &sayi); 
	
	for(int i=0 ; i<=sayi ; i++ )
     
	 sayi=sonuc *i ;
		
	
	printf ("%d sayisinin faktoriyeli : %d " ,sayi , sonuc ) ;
	
	
}
