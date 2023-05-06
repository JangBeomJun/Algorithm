#include<stdio.h>
int main(){
	int a,s,d;
	scanf("%d %d %d",&a,&s,&d);
	int f=(d-s-1)/(a-s)+1;
	printf("%d",f);
}