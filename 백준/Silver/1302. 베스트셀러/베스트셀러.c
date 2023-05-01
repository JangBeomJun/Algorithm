#include<stdio.h>
#include<string.h>
typedef struct a{
	char s[50];
	int d;
} BOOK;

int main(){
	BOOK a[1000];
	int s,t=0,r;
	scanf("%d",&s);
	char d[50];
	for(int i=0;i<s;i++){
		scanf("%s",d);
		r=0;
		for(int j=0;j<t;j++){
			if(strcmp(a[j].s,d)==0){
				a[j].d++;
				r=1;
				break;
			}
		}
		if(r==0){
			strcpy(a[t].s,d);
			a[t].d++;
			t++;
		}
	}
	int f=0;
	for(int i=0;i<t;i++){
		if(f<a[i].d){
			f=a[i].d;
			strcpy(d,a[i].s);
		}
		else if(f==a[i].d){
			if(strcmp(d,a[i].s)>0){
				strcpy(d,a[i].s);
			}
		}
	}
	printf("%s",d);
}