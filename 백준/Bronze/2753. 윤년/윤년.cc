#include<stdio.h>
int main(){
	int a,s;
	scanf("%d",&s);
	if(s%4==0 && s%100!=0) printf("1");
	else if(s%400==0) printf("1");
	else printf("0");
	return 0;
}
