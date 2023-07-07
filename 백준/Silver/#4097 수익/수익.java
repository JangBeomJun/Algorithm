import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int how= Integer.parseInt(br.readLine());
        while (how!=0){
            long [] revenue = new long[how];
            for(int i=0;i<how;i++){
                revenue[i]=Long.parseLong(br.readLine());
            }
            for(int i=1;i<how;i++){
                revenue[i]=Math.max(revenue[i],revenue[i]+revenue[i-1]);
            }
            Arrays.sort(revenue);
            System.out.println(revenue[how-1]);
            how= Integer.parseInt(br.readLine());
        }
    }
}