#include<stdio.h>
int main(){
	int a,d,s,i;
	scanf("%d %d",&a,&s);
	for(i=1;i<=a;i++){
		scanf("%d",&d);
		if(s>d) printf("%d ",d);
	}
	return 0;
}