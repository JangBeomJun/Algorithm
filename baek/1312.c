#include<stdio.h>
int main(){
	int a,s,d;
	scanf("%d %d %d",&a,&s,&d);
	int f;
	for(int i=0;i<=d;i++){
		f=a/s;
		a%=s;
		a*=10;
	}
	printf("%d",f);
}
