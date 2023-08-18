import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        int N = Integer.parseInt(br.readLine());
        int findNum = Integer.parseInt(br.readLine());
        int [][] map = new int[N][N];
        int x=N/2,y=N/2,num=1;
        int answerX=x,answerY=y;
        map[x][y]=num++;
        for(int i=0;i<N/2;i++){
            x--;
            y--;
            for(int j=0;j<=(i*2)+1;j++){
                map[x][++y]=num++;
                if(num-1==findNum){
                    answerY=y;
                    answerX=x;
                }

            }
            for(int j=0;j<=(i*2)+1;j++){
                map[++x][y]=num++;
                if(num-1==findNum){
                    answerY=y;
                    answerX=x;
                }
            }
            for(int j=0;j<=(i*2)+1;j++){
                map[x][--y]=num++;
                if(num-1==findNum){
                    answerY=y;
                    answerX=x;
                }
            }
            for(int j=0;j<=(i*2)+1;j++){
                map[--x][y]=num++;
                if(num-1==findNum){
                    answerY=y;
                    answerX=x;
                }
            }
        }
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                bw.write(map[i][j]+" ");
            }
            bw.write("\n");
        }
        bw.write((answerX+1)+" "+(answerY+1));
        bw.flush();
        bw.close();
    }
}