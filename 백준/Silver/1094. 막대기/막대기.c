#include<stdio.h>
int main(){
	int a;
	scanf("%d",&a);
	int r=0,s=64,y=0,t=64;
	while(1){
		if(r<a){
			r+=s;
			y++;
		}
		if(r>a){
			r-=s;
			y--;
		}
		if(r==a){
			printf("%d",y);
			break;
		}
		s/=2;
	}
}