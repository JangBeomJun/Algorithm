#include<stdio.h>
int main(){
	unsigned long long int a,s;
	scanf("%lld %lld",&a,&s);
	int r;
	for(int i=1;i<=10000000;i++){
		if(a%i==0 && s%i==0) r=i;
	}
	for(int i=1;i<=r;i++){
		printf("1");
	}
}