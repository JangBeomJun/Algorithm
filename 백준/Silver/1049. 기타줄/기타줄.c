#include<stdio.h>
int main(){
    int a,s,r=1001,t=1001,q=0,d,f;
    scanf("%d %d",&a,&s);
    for(int i=0;i<s;i++){
    	scanf("%d %d",&d,&f);
    	if(d<r) r=d;
    	if(f<t) t=f;
	}
	q+=(a/6*r)<(a/6*6*t) ? a/6*r:a/6*6*t;
	q+=r<(a%6*t) ? r:a%6*t;
	printf("%d",q);
}