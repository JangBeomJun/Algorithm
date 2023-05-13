#include<stdio.h>
int main(){
	int a=1,s,d,f;
	scanf("%d %d",&s,&d);
	printf("+");
	for(int i=1;i<=21;i++){
		printf("%c",45);
	}
	printf("+\n");
	printf("%c",124);
	for(int i=1;i<=d-1;i++){
		printf("...");
	}
	while(a!=s+1){
		if(a!=1 && d==1) printf("%c",124);
		if(a<10) printf("..%d",a++);
		else printf(".%d",a++);
		if(d%7==0){
			printf("%c\n",124);
			d=0;
		}
		d++;
	}
	if(d!=1){
		for(int i=d;i<=7;i++){
		printf("...");
	}
	printf("%c\n",124);
	}
	printf("+");
	for(int i=1;i<=21;i++){
		printf("%c",45);
	}
	printf("+\n");
}