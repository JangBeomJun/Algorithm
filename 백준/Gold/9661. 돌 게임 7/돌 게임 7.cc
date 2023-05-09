#include<stdio.h>
int main(){
	long long int a;
	scanf("%lld",&a);
	a=a%5;
	if(a==2 || a==0) printf("CY");
	else printf("SK");
	return 0;
}