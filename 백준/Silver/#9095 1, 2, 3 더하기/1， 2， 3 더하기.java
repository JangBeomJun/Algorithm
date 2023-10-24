import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int [] plus = new int[11];
        plus[0] = 1;
        plus[1] = 2;
        plus[2] = 4;
        for(int i=3;i<=10;i++){
            plus[i] = plus[i-1]+plus[i-2]+plus[i-3];
        }
        int T = Integer.parseInt(br.readLine());
        for(int i=0;i<T;i++){
            int n = Integer.parseInt(br.readLine());
            System.out.println(plus[n-1]);
        }

    }
}
