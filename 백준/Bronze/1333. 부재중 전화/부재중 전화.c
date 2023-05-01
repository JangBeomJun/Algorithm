#include<stdio.h>
int main(){
	int a,s,d;
	scanf("%d %d %d",&a,&s,&d);
	int f=s,g=d;
	for(int i=1;i<a;i++){
		if(d<s){
			for(;d<s;d+=g){
			}
		}
		if(s<=d && s+5>d) break;
		s+=5+f;
	}
	if(d<s){
			for(;d<s;d+=g){
			}
		}
	printf("%d",d);
}