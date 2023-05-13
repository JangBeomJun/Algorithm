#include<stdio.h>
int main(){
	int a,s;
	int d[150];
	int f[150]={0,};
	scanf("%d %d",&a,&s);
	for(int i=0;i<a;i++){
		scanf("%d",&d[i]);
	}
	int t=1,r=0;
	while(1){
		if(d[r]==s){
			printf("%d",t);
			return 0;
		} 
		f[t]=d[r];
		r=d[r];
		for(int i=0;i<t;i++){
			if(r==f[i]){
				printf("-1");
				return 0;
			}
		}
		t++;
	}
}