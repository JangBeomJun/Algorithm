#include<stdio.h>
int main(){
	int a,s;
	scanf("%d %d",&a,&s);
	for(int i=0;i<=1000;i++){
		for(int j=0;j<=i;j++){
			if(a==i+j && s==i-j){
				printf("%d %d",i,j);
				return 0;
			} 
		}
	}
	printf("-1");
}