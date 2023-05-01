#include<stdio.h>
int main(){
	char a;
	int r=0;
	for(int i=0;i<8;i++){
		for(int j=0;j<8;j++){
			scanf("%1c",&a);
			if(a=='F' && (i+j)%2==0) r++;
		}
		if(i!=7)scanf("\n");
	}
	printf("%d",r);
}