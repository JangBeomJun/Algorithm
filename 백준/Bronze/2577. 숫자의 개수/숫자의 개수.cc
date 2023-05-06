#include<stdio.h>
int main(){
	int a,s,d;
	scanf("%d\n%d\n%d",&a,&s,&d);
	long long int f=a*s*d;
	int g[10] = {0,};
	while(1){
		g[f%10]++;
		f/=10;
		if(f==0) break;
	} 
	for(int i=0;i<=9;i++){
		printf("%d\n",g[i]);
	}
	return 0;
}