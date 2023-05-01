#include<stdio.h>
#include<string.h>
int main(){
	char a[6];
	while(1){
		scanf("%s",a);
		if(a[0]==48) break;
		int s=strlen(a);
		int f=0;
		s--;
		for(int i=0;i<=s/2;i++){
			if(a[i]!=a[s-i]){
				f++;
				printf("no\n");
				break;
			}
		}
		if(f==0) printf("yes\n");
	} 
}