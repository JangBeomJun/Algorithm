#include<stdio.h>
int main(){
	int a,s,d;
	int f[15][15]={0,};
	for(int i=0;i<=14;i++){
		f[0][i]=i;
	}
	for(int i=1;i<=14;i++){
		for(int j=0;j<=14;j++){
			for(int k=0;k<=j;k++){
				f[i][j]+=f[i-1][k];
			}
		}
	}
	scanf("%d",&a);
	for(int i=1;i<=a;i++){
		scanf("%d\n%d",&s,&d);
		printf("%d\n",f[s][d]);
	}
}