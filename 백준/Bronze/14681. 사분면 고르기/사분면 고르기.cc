#include<stdio.h>
int main(){
	int a,s;
	scanf("%d\n%d",&a,&s);
	if(a>0 && s>0) printf("1");
	else if(a<0 && s>0) printf("2");
	else if(a<0 && s<0) printf("3");
	else printf("4");
	return 0;
}
