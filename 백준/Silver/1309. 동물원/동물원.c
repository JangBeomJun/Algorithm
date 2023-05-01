#include<stdio.h>
int main(){
	int a;
	int s[100000];
	s[0]=1;
	s[1]=3;
	scanf("%d",&a);
	for(int i=2;i<=a;i++){
		s[i]=((s[i-1]*2)+s[i-2])%9901;
	}
	printf("%d",s[a]);
}