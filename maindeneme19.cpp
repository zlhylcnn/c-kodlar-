#include<stdio.h>

int main () {
	//dizilerde girilen de�erleri for d�ng�s� ile ekrana bast�rma
	
	int sayilar [] ={1,2,3,4,5} ;
	int i=0 ;
	
	for(; i<5 ; i++ ) { //5. endeks 4 oldu�u i�in en son 4� basar.
		printf("%d \n" ,sayilar [i]) ;
		
	}
}
