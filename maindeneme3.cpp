#include<stdio.h>

int main ()  {
 // 1'den n'e kadar olan say�lar�n toplam�n� ve ortalamas�n� veren program
 
 int adet =0 ,  sayac =0 , toplam =0 , i ;
 
 printf ("lutfen kontrol edilecek n degerini giriniz :");
 scanf ("%d" , &adet )	;
 
  if (adet <=1) { // 1 ve 1'den k���kse sonland�r
   printf ("l�tfen 1'den b�y�k bir deger giriniz ! :");
   
   return 0 ;  	
  }	
	for ( i=1 , i <=adet ; i++ ;) {
	if ( i % 2 ==0 ) {
	toplam+=i ;
	sayac++ ;
	
	
	}		
		
	}
    printf ( "toplam=%n " ,toplam);
	printf ("ortalama=%n" ,toplam/sayac );
	
	
	
	return 0;
	
}

