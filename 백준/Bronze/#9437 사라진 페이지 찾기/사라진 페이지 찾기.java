import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st;
        while (true){
            st = new StringTokenizer(br.readLine());
            int total = Integer.parseInt(st.nextToken());
            if(total==0) break;
            int minus = Integer.parseInt(st.nextToken());

            int page=(minus-1)/2;

            if(total/2>=minus){
                if(minus%2==0) System.out.print(minus-1+" ");
                else System.out.print(minus+1+" ");
                page*=2;
                System.out.println((total-page-1)+" "+(total-page));
            }else{
                page = total/2-page;
                page*=2;
                System.out.print((page-1)+" "+page+" ");

                if(minus%2==0) System.out.println(minus-1);
                else System.out.println(minus+1);
            }
        }

    }
}
