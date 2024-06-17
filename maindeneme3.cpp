#include<stdio.h>

int main ()  {
 // 1'den n'e kadar olan sayýlarýn toplamýný ve ortalamasýný veren program
 
 int adet =0 ,  sayac =0 , toplam =0 , i ;
 
 printf ("lutfen kontrol edilecek n degerini giriniz :");
 scanf ("%d" , &adet )	;
 
  if (adet <=1) { // 1 ve 1'den küçükse sonlandýr
   printf ("lütfen 1'den büyük bir deger giriniz ! :");
   
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

