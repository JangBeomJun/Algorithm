import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.*;

public class Main{
    static int white=0,blue=0;
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st;
        int N = Integer.parseInt(br.readLine());
        int[][] paper = new int[N][N];
        for(int i=0;i<N;i++){
            st = new StringTokenizer(br.readLine());
            for(int j=0;j<N;j++){
                paper[i][j]=Integer.parseInt(st.nextToken());
            }
        }
        typeCheck(0,0,paper,N);
        System.out.printf("%d\n%d",white,blue);
    }
    public static void typeCheck(int garo, int sero, int[][] paper, int size){
        int type = paper[sero][garo];
        boolean flag=false;
        for(int i=sero;i<sero+size;i++){
            for(int j=garo;j<garo+size;j++){
                if(type!=paper[i][j]){
                    flag=true;
                    break;
                }
            }
        }
        if(flag){
            size/=2;
            typeCheck(garo,sero,paper,size);
            typeCheck(garo,sero+size,paper,size);
            typeCheck(garo+size,sero,paper,size);
            typeCheck(garo+size,sero+size,paper,size);
        }else {
            if(type==1) blue++;
            else white++;
        }
    }
}