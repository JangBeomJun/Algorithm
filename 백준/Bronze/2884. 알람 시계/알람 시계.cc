#include<stdio.h>
int main(){
	int a,s;
	scanf("%d %d",&a,&s);
	--a;
	s+=15;
	if(s>=60) {
		a++;
		s-=60;
	}
	if(a<0){
		a=23;
	}
	if(a==24) a=0;
	printf("%d %d",a,s);
	return 0;
}
