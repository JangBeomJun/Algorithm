#include<stdio.h>
int main(){
	int a,s,f=0;
	scanf("%d %d\n",&a,&s);
	int d[1000000];
	for(int i=0;i<a;i++){
		scanf("%d",&d[i]);
		if(d[i]>f) f=d[i];
	}
	long long int h=f-1,m,l=0,r;
	while(1){
		r=0;
		m=(h+l)/2;
		for(int i=0;i<a;i++){
			if(d[i]>m){
				r+=d[i]-m;
			}
		}
		if(s>r){
            h=m-1;
        }
        else if(s<r){
            l=m+1;
        }
        else break;
        if(l==m || h==m) break;
	}
		r=0;	
		for(int i=0;i<a;i++){
			if(d[i]>m){
				r+=d[i]-m;
			}
		}
		if(s>r){
            h=m-1;
        }
        else if(s<r){
            l=m+1;
        }
        m=(h+l)/2;
	printf("%lld",m);
}