#include<stdio.h>
int main(){
	int a,s,f;
	int d[50][50]={0,};
	scanf("%d %d",&a,&s);
	for(int i=0;i<a;i++){
		for(int j=0;j<s;j++){
			scanf("%1d",&d[i][j]);
		}
	}
	f=a>s? s:a;
	while(f!=1){
		for(int i=0;i<=a-f;i++){
		for(int j=0;j<=s-f;j++){
			if(d[i][j]==d[i+f-1][j] && d[i][j]==d[i][j+f-1] && d[i][j]==d[i+f-1][j+f-1]){
				printf("%d",f*f);
				return 0;
			}
		}
	}
	f--;
	}
	printf("%d",f*f);
}