#include <stdio.h>
#include <stdlib.h>
int main() {
    int a,s=1,d=0,f=0;
	char result[200000];
	int stack[100000];
	int top=-1;
    scanf("%d", &a);
    int* arr = (int*)malloc(sizeof(int) * a);
    for (int i=0;i<a;i++){
    	scanf("%d", &arr[i]);
	}
    while (1){
        if(top == -1 || stack[top] < arr[d]){
            stack[++top]=s++;
            result[f++]='+';
        } 
        else if(stack[top]==arr[d]) {
            top--;
            result[f++]='-';
            d++;
    }
        else{
            printf("NO\n");
            return 0;
        }
        if(f==a*2) break;
    }
    for (int i=0;i<f;i++){
    	printf("%c\n", result[i]);
	}
}