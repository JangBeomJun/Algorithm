#include<stdio.h>
int main() {
	int n, m, fl=0;
	int a[51][51];
	int s[51][51];
	scanf("%d %d",&n,&m);
	for (int i=0;i<n;i++){
		for (int j=0;j<m;j++){
			scanf("%1d",&a[i][j]);
		}
	}
	for (int i=0;i<n;i++){
		for (int j=0;j<m;j++){
			scanf("%1d",&s[i][j]);
		}
	}
	int ans=0;
	for (int i=0;i<n-2;i++){
		for (int j=0;j<m-2;j++){
			if (a[i][j]!=s[i][j]){
				for (int k=i;k<=i+2;k++){
					for (int l=j;l<=j+2;l++){
						a[k][l]=1-a[k][l];
					}
				}
				ans+=1;
			}
			else continue;
		}
	}
	for (int i=0;i<n;i++){
		for (int j= 0;j<m;j++){
			if (a[i][j]!=s[i][j]){
				printf("-1\n");
				fl++;
				break;
			}
		}
		if(fl==1) break;
	}
	if(fl==0)printf("%d\n",ans);
}