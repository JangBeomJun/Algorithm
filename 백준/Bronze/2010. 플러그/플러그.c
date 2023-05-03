#include<stdio.h>
int main(){
	int a,s,d=1;
	scanf("%d",&a);
	d-=a;
	for(int i=1;i<=a;i++){
		scanf("%d",&s);
		d+=s;
	}
	printf("%d",d);
}