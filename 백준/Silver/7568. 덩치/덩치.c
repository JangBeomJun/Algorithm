#include<stdio.h>
int main(){
	int a[50][2];
	int f[50];
	int s,d;
	scanf("%d",&s);
	for(int i=0;i<s;i++){
		scanf("%d %d",&a[i][0],&a[i][1]);
	}
	for(int i=0;i<s;i++){
		d=1;
		for(int j=0;j<s;j++){
			if(a[i][0]<a[j][0] && a[i][1]<a[j][1]) d++;
		}
		f[i]=d;
	}
	for(int i=0;i<s;i++){
		printf("%d ",f[i]);
	}
}