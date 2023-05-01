#include<stdio.h>
int main(){
	int a,s=2147000000,d=0;
	scanf("%d",&a);
	int f[200000]={0,};
	for(int i=0;i<a;i++){
		scanf("%d",&f[i]);
	}
	for(int i=0;i<a;i++){
		if(f[i]<s) s=f[i];
		if(d<f[i]-s){
			d=f[i]-s;
		}
	}
	printf("%d",d);
}
