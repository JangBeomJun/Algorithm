import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br  = new BufferedReader(new InputStreamReader(System.in));
        String md = br.readLine();
        StringTokenizer st = new StringTokenizer(md);
        int m = Integer.parseInt(st.nextToken());
        int d = Integer.parseInt(st.nextToken());
        int [] mount = {0,31,28,31,30,31,30,31,31,30,31,30,31};
        for(int i=0;i<m;i++){
            d+=mount[i];
        }
        switch (d%7){
            case 1:
                System.out.println("MON");
                break;
            case 2:
                System.out.println("TUE");
                break;
            case 3:
                System.out.println("WED");
                break;
            case 4:
                System.out.println("THU");
                break;
            case 5:
                System.out.println("FRI");
                break;
            case 6:
                System.out.println("SAT");
                break;
            case 0:
                System.out.println("SUN");
                break;

        }
    }
}