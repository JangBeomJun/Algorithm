#include<stdio.h>
int main(){
	char a[1000];
	int s;
	scanf("%s\n%d",a,&s);
	printf("%c",a[s-1]);
}