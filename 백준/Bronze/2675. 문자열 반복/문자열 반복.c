#include<stdio.h>
#include<string.h>
int main(){
	int a;
	scanf("%d",&a);
	for(int i=1;i<=a;i++){
		int s;
		char d[20];
		scanf("%d %s",&s,d);
		int q=strlen(d);
		for(int i=0;i<q;i++){
			for(int j=1;j<=s;j++){
				printf("%c",d[i]);
			}
			
		}
		printf("\n");
	}
}