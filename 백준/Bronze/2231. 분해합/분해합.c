#include<stdio.h>
int main(){
	int a,s,d;
	scanf("%d",&a);
	for(int i=1;i<a;i++){
		s=i;
		d=i;
		while(s!=0){
			d+=s%10;
			s/=10;
		}
		if(d==a){
			printf("%d",i);
			return 0;
		}
	}
	printf("0");
}