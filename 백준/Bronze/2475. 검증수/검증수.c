#include<stdio.h>

int main(){
	int a,t=0;
	for(int i=1;i<=5;i++){
		scanf("%d",&a);
		t+=a*a;
	}
	printf("%d",t%10);
}
