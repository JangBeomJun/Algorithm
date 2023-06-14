#include<stdio.h>
int main(){
	int a,s,d,f=0,r;
	scanf("%d\n%d",&a,&r);
	for(int i=0;i<r;i++){
		scanf("%d %d",&s,&d);
		f+=s*d;
	}
	if(a==f) printf("Yes");
	else printf("No");
}