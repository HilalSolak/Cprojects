#include<stdio.h>
#include<stdlib.h>
#include <time.h>
int asalmi(int x,int y){
	if(x==1||x==0){return printf("%d asal sayi degildir\n",x);
	}
	if(y==1||x==2){
		printf("%d asal sayidir.\n",x);
		return 0;
	}else{
		if(x%y==0){
			return printf("%d asal sayi degildir\n",x);
		}else{
			asalmi(x,y-1);
		}
	}
}

int sayicarpim(int x,int y){
	if(y==0){
		return 0;
	}
	return x+sayicarpim(x,y-1);
}
	
int kuvvetalma(int x,int y){
	if(x==1 || y==0){
		return 1;
	}else{
		return x*kuvvetalma(x,y-1);
	}
}
int sayitoplam(int x,int y){
	if(y==0){
		return x;
	}
	return 1+sayitoplam(x,y-1);
	
}
int menu(){
	int secenek,sayi;
    printf("asagidaki hesaplamalardan birini seciniz.\n1-)asal sayi bulma\n2-)sayi carpimi\n3-)kuvvet bulma\n4-)sayi toplami\ncikis icin(-1)\n");
    scanf("%d",&secenek);
		if(secenek==-1){
			printf("***cikis yapildi***");
		return -1;
	}

		else if(secenek==1){
            printf("sayi giriniz: ");
            scanf("%d",&sayi);
            asalmi(sayi,sayi/2);
            menu();
	   }else if(secenek==2){
		    srand(time(0));
		    int sayi1=1+rand()%20;
		    int sayi2=2+rand()%100;
		    printf("\n%d X %d = ",sayi1,sayi2);
		    int cevapp=sayicarpim(sayi1,sayi2);
		    printf("%d\n\n",cevapp);
		    menu();
	}
	    else if(secenek==3){
	   	    int kuvvet,taban;
            printf("taban ve kuvveti giriniz:");
		    scanf("%d %d",&taban,&kuvvet);
            int a=kuvvetalma(taban,kuvvet);
            printf("%d\n",a);
            return menu();
}       
        else if(secenek==4){
		    srand(time(0));
		 	int sayi1=1+rand()%100;
			int sayi2=100+rand()%200;
			printf("%d %d\n",sayi1,sayi2);
			int cevap=sayitoplam(sayi1,sayi2);
			printf("%d\n",cevap);
			menu();
	}	else{
			printf("hatali sayi girdiniz lutfen tekrar deneyiniz\n");
			menu();
	}
	return 1;
}

int main(){
 menu();
return 0;
}
