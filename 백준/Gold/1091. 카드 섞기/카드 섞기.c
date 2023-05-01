#include <stdio.h>
#include <stdlib.h>
void Sh(int q[48], const int w[48], int e){
    int z[48];
    for(int i=0;i<e;i++){
        z[w[i]]=q[i];
    }
    for(int i=0;i<e;i++){
        q[i]=z[i];
    }
}
int H(const int q[48], const int w[48], int e){
    for(int i=0;i<e;i++) if(q[i]!=w[i]) return 0;
    return 1;
}
int J(const int q[48], int w){
    for(int i=0;i<w;i++) if(q[i]!=i%3) return 1;
    return 0;
}
int main(){
    int a[48]={0,},s[48],d[48],f,t;
    scanf("%d", &f);
    for(int i = 0; i < f; i++){
        scanf("%d",&a[i]);
        d[i] = a[i];
    }
    for(int i = 0; i < f; i++){
        scanf("%d",&s[i]);
    }
    t=0;
    while(J(d, f)){
        Sh(d,s,f);
        if(H(d,a,f)){
            printf("-1");
            return 0;
        }
        t++;
    }
    printf("%d",t);
    return 0;
}