import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;


public class Main {
    public static void main(String[] args) throws IOException {
       BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
       StringTokenizer st = new StringTokenizer(br.readLine());
       int A = Integer.parseInt(st.nextToken());
       int B = Integer.parseInt(st.nextToken());
       int C = Integer.parseInt(st.nextToken());
       C-=B;
       if(C<=0) System.out.println("-1");
       else{
           A/=C;
           A++;
           System.out.println(A);
       }
    }
}