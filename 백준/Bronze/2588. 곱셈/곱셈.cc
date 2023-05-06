#include<stdio.h>
int main(){
	int a,s,k,l;
	scanf("%d %d",&a,&s);
	l=s;
	k=s%10;
	printf("%d\n",k*a);
	s=s/10;
	k=s%10;
	printf("%d\n",k*a);
	s=s/10;
	k=s;
	printf("%d\n",k*a);
	printf("%d",l*a);
	return 0;
}
