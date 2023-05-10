#include<stdio.h>
int main(){
	int a,t=-1,d=0;
	scanf("%d",&a);
	int s[100001]={0,};
	long long int f=0;
	for(int i=1;i<=a;i++){
		scanf("%d",&d);
		if(d!=0){
			s[++t]=d;
		}
		else{
			s[t--]=0;
		}
	}
	for(int i=0;i<=t;i++){
		f+=s[i];
	}
	printf("%lld",f);
}