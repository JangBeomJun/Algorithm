#include<stdio.h>
#include<string.h>
int main(){
	int a,d;
	scanf("%d",&a);
	for(int i=1;i<=a;i++){
		char s[200];
		scanf("%s",s);
		int f=strlen(s);
		d=0;
		for(char j='A';j<='F';j++){
			if(s[d]==j){
				if(j=='A') d--;
				d++;
				break;
			}
		}
		if(s[d]!='A'){
			printf("Good\n");
			continue;
		}
		while(s[d]==s[d+1]){
			d++;
		}
		d++;
		if(s[d]!='F'){
			printf("Good\n");
			continue;
		}
		while(s[d]==s[d+1]){
			d++;
		}
		d++;
		if(s[d]!='C'){
			printf("Good\n");
			continue;
		}
		while(s[d]==s[d+1]){
			d++;
		}
		if(f-1==d)printf("Infected!\n");
		else if(f-2==d){
			d++;
			for(char j='A';j<='F';j++){
			if(s[d]==j){
				printf("Infected!\n");
				f=-10;
				break;
			}
		}
		if(f!=-10) printf("Good\n");
		}
		else printf("Good\n"); 
	}
}