#include<stdio.h>
int main(){
	int a,i,s,d;
	scanf("%d",&a);
	for(i=1;i<=a;i++){
		for(int j=1;j<=i;j++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}