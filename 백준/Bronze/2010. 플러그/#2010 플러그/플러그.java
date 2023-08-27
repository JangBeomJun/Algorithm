
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {
    public static void main(String []args) throws IOException {
        BufferedReader br  = new BufferedReader(new InputStreamReader(System.in));
        int N = Integer.parseInt(br.readLine());
        int answer=-N;
        for(int i=0;i<N;i++){
            int a=Integer.parseInt(br.readLine());
            answer+=a;
        }
        answer++;
        System.out.println(answer);
    }
}