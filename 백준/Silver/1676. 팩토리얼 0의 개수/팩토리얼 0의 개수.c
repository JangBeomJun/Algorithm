#include<stdio.h>
int main(){
	int a,s,d,f;
	scanf("%d",&a);
	s=a/125;
	d=a/25;
	f=a/5;
	printf("%d",s+d+f);
}