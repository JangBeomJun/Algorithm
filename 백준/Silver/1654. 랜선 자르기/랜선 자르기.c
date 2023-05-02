#include<stdio.h>
int main(){
	int a,s,f=0;
	scanf("%d %d",&a,&s);
	int d[10000];
	for(int i=0;i<a;i++){
		scanf("%d",&d[i]);
		if(f<d[i]) f=d[i];
	}
	long long int h=f,l=1,m;
	while(1){
		m=(h+l)/2;
		int q=0;
		for(int i=0;i<a;i++){
			q+=d[i]/m;
		}
		if(q>=s){
			l=m+1;
		}
		else if(q<s){
			h=m-1;
		}
		if(h==m) break;
	}
	printf("%lld",m);
}