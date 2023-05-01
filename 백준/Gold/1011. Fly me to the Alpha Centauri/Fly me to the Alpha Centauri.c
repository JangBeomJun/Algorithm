#include<stdio.h>
int main(){
    int a;
	scanf("%d", &a);
    
    for(int i = 0; i < a; i++){
        int s,d,f;
        int g = 0;
        int m = 1;
        scanf("%d %d", &s, &d);
        f = d-s;
        while(f / 2 >= m){
            f -= m * 2;
            g += 2;
            m++;
        }
        if(1 <= f && f <= m)
            g++;
        else if(m < f)
            g += 2;
            
        printf("%d\n",g);
    }
}