#include<stdio.h>
int main(){
	int a,r=1;
	scanf("%d",&a);
	if(a==0) printf("1");
	else{
		for(int i=1;i<=a;i++){
			r*=i;
	}
	printf("%d",r);
}
}