#include<stdio.h>
int main(){
	int a,s,f=0;
	scanf("%d\n%d",&a,&s);
	a/=100;
	a*=100;
	for(int i=a;i<=a+100;i++){
		if(i%s==0){
			if(f<10)printf("0%d",f);
			else printf("%d",f);
			return 0;
		}
		f++;
	}
}