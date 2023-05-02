#include<stdio.h>
int main(){
	int a,s,d=0,f;
	scanf("%d",&a);
	for(int i=1;i<=a;i++){
		scanf("%d",&s);
		if(s==1) continue;
		f=0;
		for(int j=2;j<s;j++){
			if(s%j==0){
				f=1;
				break; 
			} 
		}
		if(f==0) d++;
	}
	printf("%d",d);
}