#include<stdio.h>
int main(){
	int a,s,d;
	int f[1001]={0,};
	scanf("%d %d",&a,&s);
	for(int i=1;i<=s;i++){
		scanf("%d",&d);
		f[d]++;
	}
	int q=2147000000,z;
	for(int i=1;i<=1000;i++){
		if(f[i]==1)continue;
		for(int j=i;j<=1000;j++){
			if(f[j]==1)continue;
			for(int k=j;k<=1001;k++) {
				if(f[k]==1)continue;
				z=a-(i*j*k);
				if(z<0)z*=-1;
				if(q>z) q=z;
			}
		}
	}
	printf("%d",q);
}