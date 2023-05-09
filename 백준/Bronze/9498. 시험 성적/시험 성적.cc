#include<stdio.h>
int main(){
	int a,s;
	scanf("%d",&s);
	if(100>=s && s>=90) printf("A");
	else if(90>s && s>=80) printf("B");
	else if(80>s && s>=70) printf("C");
	else if(70>s && s>=60) printf("D");
	else printf("F");
	return 0;
}
