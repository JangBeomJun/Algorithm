

    import java.io.BufferedReader;
    import java.io.IOException;
    import java.io.InputStreamReader;
    import java.util.*;

    public class Main{
        public static void main(String[] args) throws IOException {
            BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
            int n = Integer.parseInt(br.readLine());
            for(int i=0;i<n;i++){
                int x = Integer.parseInt(br.readLine());
                int count=0,lastNum=-1;
                while (x>=10){
                    lastNum=x%10;
                    x/=10;
                    if(lastNum>=5)x++;
                    count++;
                }
                int answer=1;
                for(int j=0;j<count;j++){
                    answer*=10;
                }
                answer*=x;
                System.out.println(answer);
            }
        }
    }