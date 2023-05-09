#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int static compare (const void* first, const void* second){
    if (*(double*)first > *(double*)second){
        return 1;
    }
    else if (*(double*)first < *(double*)second){
        return -1;
    }
    else{
        return 0;
    }
}
int main() {
    int t;
    scanf("%d", &t);
    for(int i=1;i<=t;i++){
        double a,b,c,d;
        double x[3];
        scanf("%lf %lf %lf %lf",&a,&b,&c,&d);
        for(double j=-1000001;j<=1000001;j++){
        	if(d==0){
                x[0]=0;
                break;
            }
            if(a*j*j+b*j+c+d/j==0){
                x[0]=j;
                break;
            }
        }
        double q=a;
		double w=b+a*x[0];
		double e=w*x[0]+c;
        if(w*w-4*q*e<0){
            printf("%.11lf",x[0]);
        }
        else if(w*w-4*q*e==0){
            x[1]=(-w)/(2*q);
            if(x[0]<x[1]){
                printf("%.11lf %.11lf",x[0],x[1]);
            }
            else if(x[0]==x[1]){
                printf("%.11lf",x[0]);
            }
            else{
                printf("%.11lf %.11lf",x[1],x[0]);
            }
        }
        else{
            x[1]=(-w+sqrt(w*w-4*q*e))/(2*q);
            x[2]=(-w-sqrt(w*w-4*q*e))/(2*q);
            qsort(x, 3, sizeof(double), compare);
            for(int j=0;j<2;j++){
                if(x[j]==x[j+1]){
                    continue;
                }
                else{
                    printf("%.11lf ",x[j]);
                }
            }
            printf("%.11lf",x[2]);
        }
        printf("\n");
    }
	return 0;
}