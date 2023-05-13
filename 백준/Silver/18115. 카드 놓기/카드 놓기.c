#include<stdio.h>
int main() {
	int a;
	scanf("%d", &a);
	int s[1000001]={0,};
	int d[1000001]={0,};
	int q=1;
	int w=0;
	int e=a-1;
	int temp;
	for(int i=0;i<a;i++){
		s[i]=i;
	}
	for(int i=0;i<a;i++) {
		scanf("%d",&temp);
		if(temp==1){
			d[s[e]]=a+1-q;
			e--;
		}	
		else if(temp==2){
			d[s[e-1]]=a+1-q;
			s[e-1]=s[e];
			e--;
		} 	
		else if(temp==3){
			d[s[w]]=a+1-q;
			w++;
		}
		q++;
	}
	for (int i=a-1;i>=0;i--){
		printf("%d ",d[i]);
	}
}