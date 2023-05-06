#include<stdio.h>
int main(){
	int a,s,d=0;
	int f[100];
	scanf("%d %d",&a,&s);
	for(int i=0;i<a;i++){
		scanf("%d",&f[i]);
	}
	for(int i=0;i<a;i++){
		for(int j=0;j<a;j++){
			for(int k=0;k<a;k++){
				if(i==j || j==k || k==i) continue;
				if(d<f[i]+f[j]+f[k] && s>=f[i]+f[j]+f[k]) d=f[i]+f[j]+f[k];
			}
		}
	}
	printf("%d",d);
}