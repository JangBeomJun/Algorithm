import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int N = Integer.parseInt(br.readLine());
        StringTokenizer st = new StringTokenizer(br.readLine());
        int [] answer = new int[N];
        for(int i=1;i<=N;i++){
            int j=Integer.parseInt(st.nextToken());
            int k;
            for(k=0;k<=j;k++){
                if(answer[k]!=0) j++;
            }
            answer[j]=i;
        }
        for(int i=0;i<N;i++){
            System.out.print(answer[i]+" ");
        }
    }
}

