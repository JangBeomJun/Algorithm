#include<stdio.h>
int main(){
	long long int a,s;
    int h=1000000000,l=0,k=-1;
	scanf("%d %d",&a,&s);
	int q=(s*100)/a;
	if(q>=99){
		printf("-1");
		return 0;
	}
	while(l<=h){
		int d=(l+h)/2;
		int r=((s+d)*100)/(d+a);
		if(r>q){
			h=d-1;
		}
		else{
			l=d+1;
			k=d+1;
		}
	}
	printf("%d",k);
}