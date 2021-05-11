#include<stdio.h>
void fonk(int *ptr){
	printf("\n Fonksiyon icinde degerler");
	printf("\nptr adresi=%p, tuttugu adres=%p, tuttugu deger=%d",&ptr,ptr,*ptr);
	*ptr+=5;
	printf("\nptr adresi=%p, tuttugu adres=%p, tuttugu deger=%d",&ptr,ptr,*ptr);
}
int main(){
	int a=3,*aptr;
	aptr=&a;
    printf("a degiskeninin adresi=%p,a degiskeni=%d",&a,a);	
	printf("\naptr adresi=%p,aptr icinde tutulan adres=%p,aptr icinde tutulan deger=%d",&aptr,aptr,*aptr);
	fonk(aptr);
	printf("\n Fonksiyondan sonra degerler\n");    printf("a degiskeninin adresi=%p,a degiskeni=%d",&a,a);	
	printf("\naptr adresi=%p,aptr icinde tutulan adres=%p,aptr icinde tutulan deger=%d",&aptr,aptr,*aptr);
	
	return 0;
}
