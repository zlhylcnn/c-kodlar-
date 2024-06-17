#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//ad yerine soy ad, soyad yerine ad yazýnca bunu düzelten program
	//strcpy=bir dizi kopyalama fonksiyonudur.
	
	char ad[30000]="Yalcin";
	char soyad[30000]="Zeliha";
	char gecici[30000] ;
	strcpy(gecici,ad) ;
	strcpy(ad,soyad) ;
	strcpy(soyad,gecici) ;
	printf("%s %s",ad,soyad) ;
	
	return 0;
}
