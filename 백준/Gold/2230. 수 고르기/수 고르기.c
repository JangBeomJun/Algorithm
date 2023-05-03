#include<stdio.h>
#include <stdlib.h>
int z[100000];
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
void quickSort(int start, int end) {
    if (start >= end) return;
    int key = start, i = start + 1, j = end, temp;
    while (i <= j) {
        while (i <= end && z[i] <= z[key]) i++; 
        while (j > start && z[j] >= z[key]) j--;
        
        if (i > j) swap(&z[key], &z[j]);
        else swap(&z[i], &z[j]);
    }
    quickSort(start, j - 1);
    quickSort(j + 1, end); 
}
int main(){
	int a,s,d,f,t=2147000000;
	scanf("%d %d",&a,&s);
	
	for(int i=0;i<a;i++){
		scanf("%d",&z[i]);
	}
	quickSort(0,a-1);
	f=d=0;
	while(1){
		if(f==a || d==a) break;
		if(z[f]-z[d]<s){
			f++;
		}
		else if(z[f]-z[d]==s){
			printf("%d",s);
			t=-1;
			break;
		}
		else{
			if(t>z[f]-z[d]) t=z[f]-z[d];
			d++;
		}
	}
	if(t!=-1) printf("%d",t);
}