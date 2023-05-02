#include<stdio.h>
int main(){
	int a,s,d,f;
	while(1){
		scanf("%d",&a);
		if(a==0) break;
		f=1;
		for(int i=1;i<=a;i++){
			scanf("%d %d",&s,&d);
			f*=s;
			f-=d;
		}
		printf("%d\n",f);
	}
}