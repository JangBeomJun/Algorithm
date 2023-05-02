#include<stdio.h>
int main(){
	int a;
	int s[3]={1,2,};
	scanf("%d",&a);
	for(int i=3;i<=a;i++){
		s[2]=(s[1]+s[0])%15746;
		s[0]=s[1];
		s[1]=s[2];
	}
	if(a==1) printf("%d",s[0]);
	else if(a==2) printf("%d",s[1]);
	else printf("%d",s[2]);
}