#include<stdio.h>

int main () {
	
	//kullan�c�dan al�nan 5 tane say�n�n aritmetik ortalamasini alan program
	int a,b,c,d,e ;
	
	float aritmetik ;
	
	printf ("5 tane sayi giriniz :") ;
	scanf("%d %d %d %d %d" , &a,&b, &c, &d, &e) ;
	aritmetik =(a+b+c+d+e) /5.0 ;
	printf ("Girdiginiz sayyilarin aritmetik ortalama  %.2f" , aritmetik ) ;
	
	
	
	return 0 ;
}
