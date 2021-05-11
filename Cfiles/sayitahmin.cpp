#include<stdio.h>
#include<stdlib.h>

void sayitahmin(int sayi){
	int tahmin;
    printf(" Tahmin Gir:");
    scanf("%d",&tahmin);
    	if(tahmin<sayi){
    		printf("daha buyuk tahmin yap:");
    	    sayitahmin(sayi);
		}
		else if(tahmin>sayi){
    		printf("daha kucuk tahmin yap:");
    		sayitahmin(sayi);
					}
	    else{
	    	printf("Tebrikler bildiniz");
	    	int cevap;	
	        printf("\ndevam etmek istiyorsaniz 1, istemiyorsaniz -1 girin:");	
	        scanf("%d",&cevap);
	        if(cevap==1){
	        	sayitahmin(sayi);
			}
	       if(cevap==-1){
	       printf("----oyundan cikis yapildi----");
		   }
		   if(cevap!=1 && cevap!=-1){
	       printf("hatali giris");
		    }}}
   int main(){
	int sayi=56;
	sayitahmin(sayi);
	return 0;
}
