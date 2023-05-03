#include<stdio.h>
int main(){
	int a,s=1,d=1;
	scanf("%d",&a);
	while(1){
		if(a<=s) break;
		s+=d*6;
		d++;
	}
	printf("%d",d);
}