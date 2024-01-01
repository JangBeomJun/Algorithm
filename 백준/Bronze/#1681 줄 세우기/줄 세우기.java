import java.util.*;
import java.io.*;

public class Main {

    public static void main(String[] args) throws IOException{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());
        int num = Integer.parseInt(st.nextToken()), i=0;
        CharSequence hate = st.nextToken();
        while (num!=0){
            i++;
            if(!String.valueOf(i).contains(hate)) num--;
        }
        System.out.println(i);
    }
}