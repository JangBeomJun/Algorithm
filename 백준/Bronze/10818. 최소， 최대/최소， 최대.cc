#include<stdio.h>
int main(){
	int a,h=-2147000000,f=2147000000,s;
	scanf("%d",&a);
	for(int i=1;i<=a;i++){
		scanf("%d",&s);
		if(s<f) f=s;
		if(h<s) h=s;
	}
	printf("%d %d",f,h);
}