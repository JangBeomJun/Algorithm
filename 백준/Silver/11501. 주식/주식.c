#include<stdio.h>
int main(){
	int a,s;
	int d[1000001]={2147000000,};
	scanf("%d",&a);
	for(int i=0;i<a;i++){
		scanf("%d",&s);
		for(int j=1;j<=s;j++){
			scanf("%d",&d[j]);
			}
		int index=s,start=s;
		long long int value=0;
		while(index>=1){
			if(d[start]<d[index-1]){
				for(int j=start;j>=index;j--){
					value+=d[start]-d[j];
				}
				start=index-1;
				index--;
			}
			else index--;
		}
		printf("%lld\n",value);
		}	
	}