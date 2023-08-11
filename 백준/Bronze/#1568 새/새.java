import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.*;

public class Main{
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        Long N = Long.parseLong(br.readLine());
        Long K=0L;
        int answer=0;
        while(N!=0){
            K++;
            if(K>N) K=1L;
            N-=K;
            answer++;
        }
        System.out.println(answer);
    }
}