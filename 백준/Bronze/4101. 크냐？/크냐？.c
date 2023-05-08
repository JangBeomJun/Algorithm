#include<stdio.h>
int main(){
	int a,s;
	while(1){
		scanf("%d %d",&a,&s);
		if(a==0 && s==0) return 0;
		if(a>s) printf("Yes\n");
		else printf("No\n");
	}
}