#include<stdio.h>
int main(){
	int a,i,s=0,d;
	scanf("%d",&a);
	for(i=1;i<=a;i++){
		s+=i;
	}
	printf("%d",s);
	return 0;
}