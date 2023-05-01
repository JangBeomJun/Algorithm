#include<stdio.h>
int main(){
	int s,d;
	scanf("%d %d",&s,&d);
	long long int a=1;
	int q=s/d,w=s%d;
	int f[110]={0,};
	for(int i=1;i<=d;i++){
		f[i]=q;
		if(w!=0){
			w--;
			f[i]++;
		}
		a*=f[i];
	}
	printf("%lld",a);	
}