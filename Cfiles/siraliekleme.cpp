#include<stdio.h>
#include<stdlib.h>
 struct n{
	int x;
	struct n*next;
};
typedef n node;
void bastir(node * r){
	while(r!=NULL){
		printf("%d\n",r->x);
	    r=r->next;
	}
}
node* eklesirali(node * r,int x){
	if(r==NULL){//linklist boþsa
	 r=(node*)malloc(sizeof(node));
	 r->next=NULL;
	 r->x=x;
	 return r;
	}if(r->x >x){// yeni sayinin ilk elemandan kücük olma durumu
	  node*temp=(node*)malloc(sizeof(node));
	  temp->x=x;
	  temp->next=r;
	  return temp;
	}node*iter=r;
	while(iter->next!=NULL && iter->next->x < x){
		iter=iter->next;
	}
		  node*temp=(node*)malloc(sizeof(node));
		  temp->next=iter->next;
		  iter->next=temp;
		  temp->x=x;
		  return r;
}
int main(){
	node*root;
	root=NULL;
	root=eklesirali(root,400);
	root=eklesirali(root,40);
	root=eklesirali(root,4);
	root=eklesirali(root,450);
	root=eklesirali(root,50);
	bastir(root);
}
