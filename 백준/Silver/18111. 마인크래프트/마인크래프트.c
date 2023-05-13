#include<stdio.h>
int main(){
    int n;
    int m;
    int inven;
    int flag = 0;
	scanf("%d %d %d",&n,&m,&inven);
    int ground[501][501] = {0,};
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            scanf("%d",&ground[i][j]);
        }
    }
    int temp = 0;
    int mintime =2147000000;
    int maxheight;
    int time = 0;
    int tobedeleted ;
    int tobeadded ;
    for (int x = 0; x < 257; x++){
        tobedeleted = 0;
        tobeadded = 0;
        for (int i = 0; i < n ; i++) {
            for (int j = 0; j < m; j++) {
                temp = ground[i][j] - x;
                if (temp > 0) {
                    tobedeleted += temp; 
                }
                else if (temp < 0) {
                    tobeadded -= temp;
                }
            }
        }

        if (tobedeleted + inven >= tobeadded ) {
            time = tobedeleted*2 + tobeadded;
            if (time <= mintime){
                    mintime = time;
                    maxheight = x;
                    flag = 1;
            }
        }
    }

    if (flag == 0){
        mintime = 0;
        maxheight = 0;
    }

    printf("%d %d",mintime,maxheight);;
    return 0;
}