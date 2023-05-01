#include<stdio.h>
int main(){
	int a,d=99;
	int s[3];
	scanf("%d",&a);
	if(a<100){
		printf("%d",a);
	}
	else if(a==1000){
		printf("144");
	}
	else{
		for(int i=100;i<=a;i++){
		s[0]=i/100;
		s[1]=i/10-s[0]*10;
		s[2]=i%10;
		if(s[1]-s[0]==s[2]-s[1]) d++;
	}
	printf("%d",d);
	}
}