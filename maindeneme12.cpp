#include<stdio.h> 
int main () {
	//iki sayi arasindaki asal sayýlarý bulan program
	
    int sayi1,sayi2,sayac ;
	printf ("iki adet sayi giriniz :") ;
	scanf("%d%d ",&sayi1,&sayi2 ); 
	
	printf ("-- %d ve %d sayilari arasindaki asal sayilar --\n" , sayi1,sayi2 ) ;
	
	for (int i =sayi1 ; i<=sayi2 ; i++) {
		sayac=0 ;
		for (int j=2 ; j<=2 ; i++) {
			if (i%j ==0 ) {
				sayac++;
			}
		}
	
	if (sayac== 0 &&sayi1 !=0 &&sayi1 != 1)
	    printf  ("%d/n" , i) ;
	    
	
	
	
	}	
	
	

}
