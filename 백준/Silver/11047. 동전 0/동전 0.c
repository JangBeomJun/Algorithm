#include<stdio.h>
int main(){
	int a,s;
	scanf("%d %d",&a,&s);
	int d[10];
	for(int i=0;i<a;i++){
		scanf("%d",&d[i]);
	}
	int f=0;
	while(s!=0 || a>0){
		f+=s/d[--a];
		s%=d[a];
	}
	printf("%d",f);
}