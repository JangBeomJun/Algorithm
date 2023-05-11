#include<stdio.h>
int main(){
	int a,s;
	scanf("%d %d",&a,&s);
	int q=1,w=1,e=1;
	for(int i=2;i<=a;i++){
		q*=i;
	}
	for(int i=2;i<=s;i++){
		w*=i;
	}
	for(int i=2;i<=(a-s);i++){
		e*=i;
	}
	e*=w;
	printf("%d",q/e);
}