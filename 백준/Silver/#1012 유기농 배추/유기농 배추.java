import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Main {
    static int[][] move = {{0,1},{0,-1},{-1,0},{1,0}};
    public static void dfs(int j,int k,boolean[][] map2,int[][] map,int M,int N){
        map2[j][k] = true;
        // 인접 노드 탐색
        for (int i=0;i<4;i++){
            if(j + move[i][0]>-1 && j + move[i][0]<M && k + move[i][1]>-1 && k + move[i][1]<N){
                if (map[j + move[i][0]][k + move[i][1]]==1 && !map2[j + move[i][0]][k + move[i][1]]){
                    dfs(j + move[i][0],k + move[i][1],map2,map,M,N);
                }
            }
        }
    }
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st;
        int M,N;
        int T = Integer.parseInt(br.readLine());
        for(int i=0;i<T;i++){
            st = new StringTokenizer(br.readLine());
            M = Integer.parseInt(st.nextToken());
            N = Integer.parseInt(st.nextToken());
            int K = Integer.parseInt(st.nextToken());
            int [][] map = new int[M][N];
            boolean[][] map2 = new boolean[M][N];
            for(int j=0;j<K;j++){
                st = new StringTokenizer(br.readLine());
                map[Integer.parseInt(st.nextToken())][Integer.parseInt(st.nextToken())]=1;
            }
            int answer=0;
            for(int j=0;j<M;j++){
                for(int k=0;k<N;k++){
                    if(map[j][k]==1 && !map2[j][k]){
                        dfs(j,k,map2,map,M,N);
                        answer++;
                    }
                }
            }
            System.out.println(answer);
        }

    }
}
