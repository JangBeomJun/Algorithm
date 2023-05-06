#include<stdio.h>
int main(){
	int a,s,d,f;
	scanf("%d %d\n%d",&a,&s,&d);
	s+=d;
	if(s>=60){
		f=s/60;
		s%=60;
		a+=f;
	}
	if(a>=24) a%=24;
	printf("%d %d",a,s);
}