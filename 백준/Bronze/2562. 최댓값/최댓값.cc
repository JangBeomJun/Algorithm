#include<stdio.h>
int main(){
	int a,h=-2147000000,f=2147000000,s;
	for(int i=1;i<=9;i++){
		scanf("%d",&s);
		if(h<s){
		h=s;
		a=i;
		}
	}
	printf("%d\n%d",h,a);
}