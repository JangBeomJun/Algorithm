#include<stdio.h>
#include<string.h>
int main(){
	int a1[3],a2[3],fl;
	for(int i=0;i<3;i++){
		scanf("%1d",&a1[i]);
	}
	for(int i=0;i<3;i++){
		scanf("%1d",&a2[i]);
	}
	for(int i=2;i>=0;i--){
		if(a1[i]!=a2[i]){
			if(a1[i]>a2[i]) fl=0;
			else fl=1;
			break;
		}
	}
	if(fl==0) 
		for(int i=2;i>=0;i--)
			printf("%d",a1[i]);
	else
	for(int i=2;i>=0;i--)
			printf("%d",a2[i]);
}