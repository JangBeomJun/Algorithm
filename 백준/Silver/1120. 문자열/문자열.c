#include<stdio.h>
#include<string.h>
int main(){
	char a[50];
	char s[50];
	scanf("%s %s",a,s);
	int d,f;
	d=strlen(a);
	f=strlen(s);
	int t=0;
	if(d==f){
		for(int i=0;i<d;i++){
			if(a[i]!=s[i]) t++;
		}
	}
	else{
		int r;
		t=2147000000;
		for(int i=0;i<=f-d;i++){
			r=0;
			for(int j=0;j<d;j++){
				if(a[j]!=s[j+i]) r++;
			}
			if(t>r) t=r;
		}
	}
	printf("%d",t);
}