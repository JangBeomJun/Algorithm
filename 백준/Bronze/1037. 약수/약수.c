#include<stdio.h>
int main(){
	int a,d=0,q=2147000000;
	int s[50];
	scanf("%d",&a);
	for(int i=0;i<a;i++){
		scanf("%d",&s[i]);
		if(s[i]>d) d=s[i];
		if(s[i]<q) q=s[i];
	}
	printf("%d",d*q);
}