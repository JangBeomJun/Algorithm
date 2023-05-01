#include<stdio.h>
#include<string.h>
int main(){
	char a[1000000];
	int d[26]={0,};
	int s,fl=0,t;
	scanf("%s",a);
	s=strlen(a);
	for(int i=0;i<s;i++){
		if(a[i]>93) a[i]-=32;
		a[i]-=65;
		d[a[i]]++;
	}
	s=0;
	for(int i=0;i<26;i++){
		if(s<d[i]){
			s=d[i];
			t=i;
		}
	}
	for(int i=0;i<26;i++){
		if(s==d[i] && t!=i){
			fl=1;
		}
	}
	if(fl==1) printf("?");
	else printf("%c",t+65);
}