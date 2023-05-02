#include<stdio.h>
int main(){
	int a,s;
	long long int d=1;
	scanf("%d %d",&a,&s);
	for(int i=1;i<a+s+(s==0 ? 1 : 0);i++){
		d+=6*i;
	}
	d+=s;
	printf("%lld",d);
}