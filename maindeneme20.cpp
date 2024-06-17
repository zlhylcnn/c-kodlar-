#include<stdio.h>


int main() {
	//kullanýcýdan alýnan deðerleri dizide depolayan ve bunlarýn aritmetik ortalamasýný yazdýran program
	
	float toplam=0.0 ;
	
	float sayilar[5] ;
	int i ;
	for (i=0 ; i<5 ;i++ ) {
		printf("Bir sayi giriniz :" ) ;
		scanf("%f" , &sayilar[i]) ;
		
	}
	for(i=0 ; i<5 ; i++ ) {
		toplam+= sayilar[i] ;
		
	}
	printf("girdiginiz sayilarin aritmetik ort. %.2f dir." , toplam /5) ;
	
	
	
	return 0 ;
}
