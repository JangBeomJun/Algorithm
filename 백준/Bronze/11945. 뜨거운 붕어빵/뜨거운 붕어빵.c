#include<stdio.h>
int main(){
	int a,s;
	int d[10][10];
	scanf("%d %d",&a,&s);
	for(int i=0;i<a;i++){
		for(int j=0;j<s;j++){
			scanf("%1d",&d[i][j]);
		}
	}
	for(int i=0;i<a;i++){
		for(int j=s-1;j>=0;j--){
			printf("%d",d[i][j]);
		}
		printf("\n");
	}
}