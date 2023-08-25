import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int N = Integer.parseInt(br.readLine());
        long round=10,count=1;
        long answer=0;
        while(round<=N){
            answer=(answer+count*(9*(round/10)))%1234567;
            count++;
            round*=10;
        }
        for(long i=round/10;i<=N;i++){
            answer=(answer+count)%1234567;
        }
        System.out.println(answer);
    }
}