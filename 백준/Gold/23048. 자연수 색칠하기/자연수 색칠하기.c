#include<stdio.h>
int main(){
	int a,co=1,fl;
	int c[500001]={1,};
	scanf("%d",&a);
	c[1]=1;
	for(int i=2;i<=a;i++){
		if(c[i]==0){
			co++;
			for(int j=i;j<=a;j+=i){
				c[j]=co;
			}
		}
	}
	printf("%d\n",co);
	for(int i=1;i<=a;i++){
		printf("%d ",c[i]);
	}
}