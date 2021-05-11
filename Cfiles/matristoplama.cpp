#include<stdio.h>
void matrisyap(int n[100][100],int a,int b){
	for(int i=0;i<a;i++){
		for(int j=0;j<b;j++){
			printf("%d. satirin %d. sutununu giriniz:",i+1,j+1);
			scanf("%d",&n[i][j]);
		}
	} for (int i=0;i<a;i++){
   	for(int j=0;j<b;j++){
   		
   		printf("%d ",n[i][j]);
		   	   }printf("\n");
   }
}

void matristopla(int n1[100][100],int n2[100][100],int n3[100][100],int a,int b,int c,int d){
	if(a==c&&b==d){
	printf("\n----matris toplami----\n");
	for(int i=0;i<a;i++){
		for(int j=0;j<b;j++){
		n3[i][j]=n1[i][j]+n2[i][j];	
}}for (int i=0;i<a;i++){
   	for(int j=0;j<b;j++){
   		
   		printf("%d ",n3[i][j]);
		   	   }printf("\n");
   }
 }else{
printf("verilen iki matris toplanamaz olculeri ayni olmali");

}}
int main() {
	int m1[100][100],m2[100][100],m3[100][100],x,z,p,q;
	printf("birinci matris olculeri :");
	scanf("%d %d",&x,&z);
	printf("ikinci matris olculeri :");
	scanf("%d %d",&p,&q);
	printf("\n--birinci matris--\n");
	matrisyap(m1,x,z);
	printf("\n--ikinci matris--\n");
	matrisyap(m2,p,q);
	matristopla(m1,m2,m3,x,z,p,q);

  return 0;

} 
