
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.LinkedList;
import java.util.Queue;
import java.util.StringTokenizer;

public class Main{
    static int N;
    static int M;
    static int count;
    static int wCount = 0, bCount = 0;
    static Queue<Node> que = new LinkedList<>();
    static int dy[] = {-1, 1, 0, 0}; // 상 하 좌 우
    static int dx[] = {0, 0, -1, 1}; // 상 하 좌 우
    static boolean Visit[][];
    static char map[][];





    static class Node {
        int x;
        int y;
        public Node(int y, int x) {
            this.y = y;
            this.x = x;
        }
    }








    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st =new StringTokenizer(br.readLine());
        N = Integer.parseInt(st.nextToken());
        M = Integer.parseInt(st.nextToken());
        Visit = new boolean[M][N];
        map = new char[M][N];
        for(int i=0; i<M; i++) {
            st = new StringTokenizer(br.readLine());
            String temp = st.nextToken();
            for(int j=0; j<N; j++) {
                char ch = temp.charAt(j);
                map[i][j] = ch;
            }
        }
        for(int i=0; i<M; i++) {
            for(int j=0; j<N; j++) {
                if(!Visit[i][j]) {
                    if(map[i][j] == 'W') {
                        int num = BFS(i, j, 'W');
                        wCount += num * num;
                    }
                    else {
                        int num = BFS(i, j, 'B');
                        bCount += num * num;
                    }

                }
            }
        }
        System.out.println(wCount + " " + bCount);
    }







    static int BFS(int y, int x, char ch) {
        que.offer(new Node(y, x));
        count = 1;
        Visit[y][x] = true;
        while( !que.isEmpty() ) {

            Node now = que.remove();

            for(int i=0; i<4; i++) {
                int now_y = now.y + dy[i];
                int now_x = now.x + dx[i];
                if(now_y >= 0 && now_y<M && now_x>=0 && now_x<N) {
                    if(!Visit[now_y][now_x] && ch == map[now_y][now_x] ) {
                        que.add(new Node(now_y, now_x));
                        Visit[now_y][now_x] = true;
                        count++;
                    }
                }
            }
        }
        return count;
    }
}