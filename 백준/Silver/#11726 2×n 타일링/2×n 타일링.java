import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(br.readLine());
        int a=0,b=1,c=0;
        for(int i=1;i<=n;i++){
            c=(a+b)%10007;
            a=b;
            b=c;
        }
        System.out.println(c);
    }
}