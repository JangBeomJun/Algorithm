#include<stdio.h>
#include<string.h>
int main(){
	int a,d,fl=0;
	char s[2048];
	int f[2048];
	scanf("%d",&a);
	for(int i=1;i<=a;i++){
		scanf("%s",&s[1]);
		d=strlen(&s[1]);
		fl=0;
		d/=2;
		while(d!=0){
			for(int j=1;j<=d;j++){
				if(s[j]==s[d*2+2-j]){
					fl=1;
					break;
				}
			}
			if(fl==1){
				printf("NO\n");
				break; 
			}
			d/=2;
		}
		if(fl==0){
			printf("YES\n");
		}
	}
}