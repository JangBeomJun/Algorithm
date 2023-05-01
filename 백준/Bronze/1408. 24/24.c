#include<stdio.h>
int main(){
	int d[10];
	int y;
	for(int i=0;i<2;i++){
		scanf("%d:%d:%d",&d[0+i*3],&d[1+i*3],&d[2+i*3]);
	}
	for(int i=2;i>=0;i--){
		if(d[i]>d[i+3]){
			if(i!=0){
				y=0;
				d[i-1]++;
				for(int j=d[i];j<d[i+3]+60;j++){
					y++;
				}
				d[i]=y;
			}
			else{
				y=0;
				for(int j=d[i];j<d[i+3]+24;j++){
					y++;
				}
				d[i]=y;	
			}
		}
		else{
			d[i+3]-=d[i];
			d[i]=d[i+3];
		}
	}
	for(int i=0;i<2;i++){
		if(d[i]<10)printf("0");
		printf("%d:",d[i]);
	}
	if(d[2]<10)printf("0");
		printf("%d",d[2]);
} 