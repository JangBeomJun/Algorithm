#include <stdio.h>
int main() {
    int a[2000000]={0,};
    int s,d=0;
    scanf("%d",&s);
    for(int i=0;i<s;i++){
        a[i]=i+1;
    }
    for(int i=1;i<1000000;i++){
        a[s+d] = a[i];
        i++;
        d++;
        if(a[i + 1] == 0 && a[i] != 0){
            printf("%d",a[i]);
        }
    }
    if (s==1)
    printf("1");
}