#include<stdio.h>
int main(){
	int array[81]={0,};
	int a,s,d;
	scanf("%d %d %d",&a,&s,&d);
	for(int i=1;i<=a;i++){
		for(int j=1;j<=s;j++){
			for(int k=1;k<=d;k++){
				array[i+j+k]++;
			}
		}
	}
	a=s=0;
	for(int i=1;i<=80;i++){
		if(array[i]>s){
			s=array[i];
			a=i;
		}
	}
	printf("%d",a);
}