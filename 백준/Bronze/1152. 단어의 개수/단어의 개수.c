#include<stdio.h>
#include<string.h>
int main(){
	char a[1000000];
	int s,fl=1,j=0;
	scanf("%[^\n]s",a);
	s=strlen(a);
	for(int i=0;i<s;i++){
		if(a[i]!=' '){
		fl=0;	
		}
		else{
			if(fl==0){
				j++;
				fl=1;
			} 
		}
	}
	if(fl==0) j++;
	printf("%d",j);
}