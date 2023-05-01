#include<stdio.h>
int dp[1000001]={0,};
int find(int s){
	if(dp[s] != 0) return dp[s];
	if(s==1) return 0;
	int d = 1000000;
	if(s%3==0) d=find(s/3)+1;
	if(s%2==0){
		if(d>find(s/2)+1) d=find(s/2)+1;
	}
	if(d>find(s-1)+1) d=find(s-1)+1;
	
	dp[s]=d;
	return d;
}
int main(){
	int a;
	scanf("%d",&a);
	dp[1] = 0, dp[2] = 1, dp[3] = 1;
    if (a == 1) {
        printf("0");
        return 0;
    }
    printf("%d",find(a));
}