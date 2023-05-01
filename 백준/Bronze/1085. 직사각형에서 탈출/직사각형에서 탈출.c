#include<stdio.h>
int main(){
	int a,s,d,f;
	scanf("%d %d %d %d",&a,&s,&d,&f);
	a=a<d-a ? a:d-a;
	s=s<f-s ? s:f-s;
	printf("%d",a>s ? s:a);
}