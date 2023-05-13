#include<stdio.h>
int main(){
	int a,d,f;
	scanf("%d",&a);
	int s[50001]={0,};
	s[1]=1;
	for(int i=1;i<=a;i++){
		s[i]=s[i-1]+1;
		for(int j=2;j*j<=i;j++){
			if(s[i]>1+s[i-j*j]) s[i]=1+s[i-j*j];
		}
	}
	printf("%d",s[a]);
}