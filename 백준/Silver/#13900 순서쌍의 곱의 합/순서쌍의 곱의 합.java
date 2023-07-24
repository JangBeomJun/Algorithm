import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;


public class Main {
    public static void main(String[] args) throws IOException {
       BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
       int num = Integer.parseInt(br.readLine());
       int [] numArray = new int[num];
       StringTokenizer st = new StringTokenizer(br.readLine());
       long add=0;
       for(int i=0;i<num;i++){
           numArray[i] = Integer.parseInt(st.nextToken());
           add+=numArray[i];
       }
       long answer=0;
       for(int i=0;i<num-1;i++){
               add-=numArray[i];
               answer+=add*numArray[i];
       }
        System.out.println(answer);
    }
}