#include<stdio.h>
int main(){
	long long int a=0,s=0,z=0,x=0,c=0,t=0,y=0,r=0,v=0;
	long long int d[100002]={0,};
	scanf("%lld %lld",&a,&s);
	for(int i=1;i<=s;i++){
		scanf("%lld %lld %lld",&z,&x,&c);
		if(z==1){
			d[c]+=x;
			if(c!=a+1){
				t+=x;
			for(int j=1;j<=a;j++){
				if(v<d[j]) v=d[j];
			}
			}
		}
		else{
			y=d[a+1]+x;
			if(y>v && (y-1)*a>=t+c) printf("YES\n");
			else printf("NO\n");
		}
	}
}