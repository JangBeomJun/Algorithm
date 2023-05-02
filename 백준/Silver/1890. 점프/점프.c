#include<stdio.h>
unsigned long long int a[100][100];
unsigned long long int dp[100][100];
int n;
int main() {
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			scanf("%lld",&a[i][j]);
			dp[i][j]=0;
		}
	}
	dp[0][0]=1;
	for(int x=0;x<n;x++) {
		for(int y=0;y<n;y++) {
			if(dp[x][y]==0 || a[x][y]==0)
				continue;
			if(x + a[x][y] < n)
				dp[x+a[x][y]][y]+=dp[x][y];
			if(y + a[x][y] < n)
				dp[x][y+a[x][y]]+=dp[x][y];
		}
	}
	printf("%lld",dp[n-1][n-1]);
}