#include<stdio.h>
#include <stdlib.h>
int main(){
	int a;
	int s[10001]={0,};
	int d[10001]={0,};
	scanf("%d",&a);
	int f[10001]={0,};
	for(int i=1;i<=a;i++){
		scanf("%d %d",&s[i],&d[i]);
	}
	for(int i=1;i<=a;i++){
		for(int j=1;j<=a;j++){
			if(i!=j){
				if((s[i]+d[i]*s[j])>(s[j]+d[j]*s[i])) f[i]++;
				else f[j]++;
			}
		}
	}
	int q=0;
	f[q]=-2;
	for(int i=1;i<=a;i++){
		for(int j=1;j<=a;j++){
			if(f[j]>=f[q]){
				if(f[j]==f[q]){
					if((s[q]+d[q]*s[j])<(s[j]+d[j]*s[q])) q=j;
				}
				else{
					q=j;
				}
			}
		}
		printf("%d\n",q);
		f[q]=-3;
		q=0;
	}
}