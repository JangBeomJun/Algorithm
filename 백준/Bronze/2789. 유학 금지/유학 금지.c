#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	char* a;
	char s[100];
	int d=0;
	a = (char *)malloc(sizeof(char) * 100);
	scanf("%s",a);
	for(int i=0;i<strlen(a);i++){
		if(a[i]!='C' && a[i]!='A' && a[i]!='M' && a[i]!='B' && a[i]!='R' && a[i]!='I' && a[i]!='D' && a[i]!='G' &&a[i]!='E'){
			s[d++]=a[i];			
		}
	}
	for(int i=0;i<d;i++){
		printf("%c",s[i]);
	}
	free(a);
}