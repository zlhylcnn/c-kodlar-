#include<stdio.h>

//d�ng�de break deyimini kullanarak kullan�c�dan -1girilene kadar girilen sayilar� toplay�p d�ng�den ��kmayan sonsuz d�ng�
//d�ng� break deyimiyle kar��la��rsa sonlan�r.
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
