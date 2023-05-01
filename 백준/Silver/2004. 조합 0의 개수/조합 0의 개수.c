#include<stdio.h>
long long int c2(long long int w){
	long long int q=0;
	for(long long int i=2; i<=w; i*=2)
    {
        q += w / i;
    }
    return q;
}
long long int c5(long long int w){
	long long int q=0;
	for(long long int i=5; i<=w; i*=5)
    {
        q += w / i;
    }
    return q;
}
int main(){
	long long int a,s,d,f;
	scanf("%d %d",&a,&s);
	d=c2(a)-(c2(a-s)+c2(s));
	f=c5(a)-(c5(a-s)+c5(s));
	printf("%d",(d<f) ? d:f);
}