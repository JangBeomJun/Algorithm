#include<stdio.h>
int main(){
	int a;
	scanf("%d",&a);
	int s,d,f,g=0;
	s=a;
	while(1){
		d=s/10;
		f=s%10;
		d+=f;
		s=f*10;
		s+=d%10;
		g++;
		if(a==s) break;
	}
	printf("%d",g);
}