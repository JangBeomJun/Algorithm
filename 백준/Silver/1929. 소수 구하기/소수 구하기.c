#include<stdio.h>
int main(){
	int a,s,d;
	int f[1000001]={0,};
	scanf("%d %d",&a,&s);
	if(a==1) a++;
	for(int i=2;i<=1000000;i++){
		if(f[i]==1) continue;
		for(int j=i+i;j<=1000000;j+=i){
			f[j]=1;
		}
	}
	for(int i=a;i<=s;i++){
		if(f[i]==0) printf("%d\n",i);
	}
} 