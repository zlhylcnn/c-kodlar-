#include<stdio.h>

int main () {
	//dizilerde girilen deðerleri for döngüsü ile ekrana bastýrma
	
	int sayilar [] ={1,2,3,4,5} ;
	int i=0 ;
	
	for(; i<5 ; i++ ) { //5. endeks 4 olduðu için en son 4ü basar.
		printf("%d \n" ,sayilar [i]) ;
		
	}
}
