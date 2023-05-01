#include<stdio.h>
int main(){
	int a,s,q=2147000000;
	char d;
	int f[50][50];
	scanf("%d %d\n",&a,&s);
	for(int i=0;i<a;i++){
		for(int j=0;j<s;j++){
			scanf("%c",&d);
			if(d=='W') f[i][j]=1;
			if(d=='B') f[i][j]=0;
		}
		if(a-1!=i) scanf("\n");
	}
	int t,y;
	for(int i=0;i<=a-8;i++){
		for(int j=0;j<=s-8;j++){
			t=0,y=0;
			for(int k=i;k<i+8;k++){
				for(int l=j;l<j+8;l++){
					if(f[k][l]==(k+l)%2) t++;
					if(f[k][l]!=(k+l)%2) y++;
				}
			}
			if(q>t) q=t;
			if(q>y) q=y;
		}
	}
	printf("%d",q);
}