#include<stdio.h>
int main(){
	int a,s,d=0;
	long long int f=0;
	scanf("%d\n%d",&a,&s);
	if(a==1 && s==0){
		printf("0");
		return 0;
	}
	f+=a;
	switch(a){
		case 2:
			for(int i=1;i<=s;i++){
				if(i%2==0) f+=2;
				else f+=6;
			}
			break;
		case 3:
			for(int i=1;i<=s;i++){
				f+=4;
			}
			break;
		case 4:
			for(int i=1;i<=s;i++){
				if(i%2==1) f+=2;
				else f+=6;
			}
			break;
		default:
			for(int i=1;i<=s;i++){
				f+=8;
			}	
	}
	printf("%lld",--f);
}