#include<stdio.h>
#include<string.h>
int main(){
	int a;
	scanf("%d",&a);
	for(int i=1;i<=a;i++){
		char s[80];
		scanf("%s",s);
		int d=strlen(s);
		int f=0,t=0,r=0;
		while(d!=f){
			switch(s[f]){
				case 'O':r+=++t;
				break;
				case 'X':t=0;
				break;
			}
			f++;
		}
		printf("%d\n",r);
	}
}