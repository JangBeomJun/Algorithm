#include<stdio.h>
int main(){
	int a,k,u=0;
	int g[41] = {0,};
	for(int i=1;i<=10;i++){
		scanf("%d",&a);
		k=a%42;
		g[k]++;
		if(g[k]==1)u++;
	}
	printf("%d",u);
	return 0;
}