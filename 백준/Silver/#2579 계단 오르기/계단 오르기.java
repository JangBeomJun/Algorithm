import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int N = Integer.parseInt(br.readLine());
        int [] array = new int[N];
        int [] dp = new int[N];
        for(int i=0;i<N;i++){
            array[i] = Integer.parseInt(br.readLine());
        }
        dp[0] = array[0];
        if(N>1) dp[1] = array[0]+array[1];
        if(N>2)dp[2] = Math.max(array[0]+array[2],array[1]+array[2]);
        for(int i=3;i<N;i++){
            dp[i]=Math.max(dp[i-3]+array[i-1]+array[i],dp[i-2]+array[i]);
        }
        System.out.println(dp[N-1]);
    }
}