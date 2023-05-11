#include<stdio.h>
#include<string.h>
int main(){
	int a,s,t=0;
	scanf("%d",&a);
	for(int i=1;i<=a;i++){
		scanf("%1d",&s);
		t+=s;
	}
	printf("%d",t);
}