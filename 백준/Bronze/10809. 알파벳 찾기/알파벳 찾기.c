#include<stdio.h>
#include<string.h>
int main(){
	char a[100];
	int d[26];
	for(int i=0;i<=25;i++){
		d[i]=-1;
	}
	int s,fl=0,t;
	scanf("%s",a);
	s=strlen(a);
	for(int i=0;i<s;i++){
		a[i]-=97;
		if(d[a[i]]==-1) d[a[i]]=i;
	}
	s=0;
	for(int i=0;i<26;i++){
		printf("%d ",d[i]);
	}
}