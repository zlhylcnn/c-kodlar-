#include<stdio.h> 


int main () {
	
	//for döngüsü ve continue deyimi ile 1'den 10'a kadar olan çitf sayýlarýn toplamýný yazdýran program 
	//continue: kendinden aþaðýdaki satýrlara inmeden direkt basa döner
	int toplam=0 ;
	
	int i;
	
	for (i=1 ; i <=3000000 ; i++) { //10 kýsmýný istediðin gibi deðiþtir
		
		if (i % 2 ==1 ) {
		
		    continue ;
		    
	}
	
	
	toplam+=i ;
	
}
	
printf("%d" , toplam) ;

return 0 ;

}
