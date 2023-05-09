#include<stdio.h>
#include<string.h>
int main(){
	int a;
	char s[50];
	scanf("%d",&a);
	for(int i=1;i<=a;i++){
		scanf("%s",s);
		int d=strlen(s);
		char q[50];
		int t=-1,r=1;
		for(int j=0;j<d;j++){
			if(s[j]=='('){
				q[++t]='(';
			}
			else{
				if(q[t]=='('){
					t--;
				}
				else{
					q[++t]=')';
				}
			}
		}
		if(t==-1) printf("YES\n");
		else printf("NO\n");
	}
}