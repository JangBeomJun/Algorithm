#include<stdio.h>
int main(){
	int a,s;
	int d[201]={0,};
	scanf("%d",&a);
	for(int i=0;i<=a;i++){
		scanf("%d",&s);
		d[s+100]++;
	}
	printf("%d",d[s+100]-1);
}