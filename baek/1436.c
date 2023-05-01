#include<stdio.h>
int main(){
	int a,s=0,d=0,t;
	scanf("%d",&a);
	while(s!=a){
		d++;
		t=d;
		while(t!=0){
			if (t%1000==666){
				s++;
				break;
			}
			else t/=10;
		}
	}
	printf("%d",d);
}
