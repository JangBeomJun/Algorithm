#include<stdio.h>
int main(){
	int a,s;
	int d[50];
	scanf("%d",&a);
	for(int i=0;i<a;i++){
		scanf("%d",&d[i]);
	}
	scanf("%d",&s);
	int z=2147000000,x=0;
	for(int i=0;i<a;i++){
		if(d[i]>s && z>d[i]) z=d[i];
		if(d[i]==s){
			printf("0");
			return 0;
		}
		if(d[i]<s && x<d[i]) x=d[i];
	}
	int t=0;
	for(int i=x+1;i<=s;i++){
		for(int j=s;j<z;j++){
			t++;
		}
	}
	printf("%d",--t);
}