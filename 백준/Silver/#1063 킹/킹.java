
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;
import java.util.StringTokenizer;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());
        char[] king = st.nextToken().toCharArray();
        char[] stone = st.nextToken().toCharArray();
        int N = Integer.parseInt(st.nextToken());
        for(int i=0; i<N; i++) {
            String line = br.readLine();
            char[] k_move = king.clone();
            char[] s_move = stone.clone();

            switch (line) {
                case "R": k_move[0]++; break;
                case "L": k_move[0]--; break;
                case "B": k_move[1]--; break;
                case "T": k_move[1]++; break;
                case "RT": k_move[0]++; k_move[1]++; break;
                case "LT": k_move[0]--; k_move[1]++; break;
                case "RB": k_move[0]++; k_move[1]--; break;
                case "LB": k_move[0]--; k_move[1]--; break;
            }

            if(k_move[0]<'A' || k_move[0]>'H'||k_move[1]<'1'||k_move[1]>'8') continue;
            if(Arrays.equals(k_move, s_move)) {
                switch (line) {
                    case "R": s_move[0]++; break;
                    case "L": s_move[0]--; break;
                    case "B": s_move[1]--; break;
                    case "T": s_move[1]++; break;
                    case "RT": s_move[0]++; s_move[1]++; break;
                    case "LT": s_move[0]--; s_move[1]++; break;
                    case "RB": s_move[0]++; s_move[1]--; break;
                    case "LB": s_move[0]--; s_move[1]--; break;
                }
                if(s_move[0]<'A' || s_move[0]>'H'||s_move[1]<'1'||s_move[1]>'8') continue;
            }
            king = k_move;
            stone = s_move;
        }
        System.out.println(king);
        System.out.println(stone);
    }
}
