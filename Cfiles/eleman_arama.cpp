#include<stdio.h>
int main(){

int a[]={2,3,7,10,15,21,24,70};
int mid;
int loww=0;
int highh=7;
int ara=80;

while(loww<=highh){
	mid=(loww+highh)/2;
	if(ara==a[mid]){
		printf("%d sayisi %d. indexte bulundu",ara,mid);
		return mid;
	}else 
	     if(ara<a[mid]){
	     	highh=mid-1;
		 }else{
		 	loww=mid+1;
		 }
}printf("%d sayisi bulunamadi",ara);
return 0;
}
