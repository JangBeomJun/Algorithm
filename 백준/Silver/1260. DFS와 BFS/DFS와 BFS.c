#include<stdio.h>
int a, s, d;
int mat[1001][1001]={0,};
int visit[1001]={0,}; 
void dfs(int v) {
    printf("%d ",v);
    visit[v] = 1;
    for(int i=1; i<=a; i++) {
        if(visit[i] == 1 || mat[v][i] == 0){
        	continue;
		}   
        else{
        	dfs(i);
		}
    }
}
void bfs(int v) {
	int q[1001]={0,};
	int f=-1,e=-1;
    q[++f]=v;
    visit[v] = 0;
    while(f!=e) {
        v = q[e+1];
        printf("%d ",q[++e]);
        for(int i=1; i<=a; i++) {
            if(visit[i] == 0 || mat[v][i] == 0){
            	continue;
			}
			else{
				q[++f]=i;
            	visit[i] = 0;
			}
        }
    }
}
 
int main() {
    int x, y;
    scanf("%d %d %d",&a,&s,&d);        
    for(int i=0; i<s; i++) {
        scanf("%d %d",&x,&y);            
        mat[x][y] = 1;
		mat[y][x] = 1;
    }
    dfs(d);            
    printf("\n");
    bfs(d);
    return 0;
}