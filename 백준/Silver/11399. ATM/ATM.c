#include<stdio.h>
#include<stdlib.h> 
int compare(const void *a, const void *b){
    int num1 = *(int *)a;
    int num2 = *(int *)b;
    if (num1 < num2)
        return -1;
    if (num1 > num2)
        return 1; 
    return 0;
}
int main(){
	int a,s=0,d=0;
	int f[1000]={0,};
	scanf("%d",&a);
	for(int i=0;i<a;i++){
		scanf("%d",&f[i]);
	}
	qsort(f, a, sizeof(int), compare);
	for(int i=0;i<a;i++){
		d+=f[i];
		s+=d;
	}
	printf("%d",s);
}