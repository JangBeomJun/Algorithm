import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int N = Integer.parseInt(br.readLine());
        long [] twoHitNum = new long[100];
        twoHitNum[0]=0;
        twoHitNum[1]=1;
        for(int i=2;i<=N;i++){
            twoHitNum[i]=twoHitNum[i-1]+twoHitNum[i-2];
        }
        System.out.println(twoHitNum[N]);
    }
}