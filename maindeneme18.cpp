#include<stdio.h> 


int main () {
	
	//for d�ng�s� ve continue deyimi ile 1'den 10'a kadar olan �itf say�lar�n toplam�n� yazd�ran program 
	//continue: kendinden a�a��daki sat�rlara inmeden direkt basa d�ner
	int toplam=0 ;
	
	int i;
	
	for (i=1 ; i <=3000000 ; i++) { //10 k�sm�n� istedi�in gibi de�i�tir
		
		if (i % 2 ==1 ) {
		
		    continue ;
		    
	}
	
	
	toplam+=i ;
	
}
	
printf("%d" , toplam) ;

return 0 ;

}
