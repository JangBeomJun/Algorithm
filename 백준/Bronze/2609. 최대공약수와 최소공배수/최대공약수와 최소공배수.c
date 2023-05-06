#include<stdio.h>
int main(){
	int a,s,d,f;
	scanf("%d %d",&a,&s);
	if(a<s){
		d=s;
		s=a;
		a=d;
	}
	for(int i=1;i<=s;i++){
		if(a%i==0 && s%i==0) d=i;
	}
	for(int i=a*s;i>=1;i--){
		if(i%a==0 && i%s==0) f=i;
	}
	printf("%d\n%d",d,f);
}