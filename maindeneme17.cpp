#include<stdio.h>

//döngüde break deyimini kullanarak kullanýcýdan -1girilene kadar girilen sayilarý toplayýp döngüden çýkmayan sonsuz döngü
//döngü break deyimiyle karþýlaþýrsa sonlanýr.
int main () {
	int toplam=0 ;
	int i;
	int sayi ;
	
	for (i=0 ; true ;i++) {
		printf("Sayiyi giriniz : (Cikmak icin -1 basin)") ;
		scanf("%d",&sayi) ;
		
		if(sayi==-1) {
			break;
			
		}
		
		toplam+=sayi;
	} 
	printf ("%d", toplam) ;
	
	
	  return 0 ;
}
