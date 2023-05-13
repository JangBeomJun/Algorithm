#include<stdio.h>
int main(){
	int a,s=1,d=1;
	scanf("%d",&a);
		while(1){
		if(a<s+(++d)){
			printf("0");
			return 0;
		} 
		if(a==s+d){
			printf("%d",d+1);
			return 0;
		}
		s+=d;
		if(a<=s+(++d)){
			printf("%d",(s+d)-a);
			return 0;
		} 
		s+=d;
	}
}