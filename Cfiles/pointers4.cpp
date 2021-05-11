#include<stdio.h>
int larger(int *x,int *y){
	printf("\nfonksiyon icinde degerler\n,x adresi=%p,y adresi=%p",&x,&y);
	printf("\nx tuttugu adres=%p,y tuttugu adres=%p",x,y);
	printf("\nx tuttugu deger=%d,y  tuttugu deger=%d",*x,*y);
	if(*x >*y){
		return x;
	}else{
		return y;
	}
}
int main(){
	int a=15,b=92;
	int *p;
	printf("\na=%d,b=%d",a,b);
	printf("\na adresi=%p, b adresi=%p,p adresi=%p",&a,&b,&p);
	p=larger(&a,&b);
	printf("\np tuttugu adresi=%p ,p degeri=%d",p,*p);
	printf("\n%d is larger",p*);
	return 0;
}
