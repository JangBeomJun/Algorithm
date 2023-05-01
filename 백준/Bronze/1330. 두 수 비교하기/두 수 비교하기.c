#include<stdio.h>
int main(){
	int a,s;
	scanf("%d %d",&a,&s);
	if(a>s) printf(">");
	else if(a==s) printf("==");
	else printf("<");
}