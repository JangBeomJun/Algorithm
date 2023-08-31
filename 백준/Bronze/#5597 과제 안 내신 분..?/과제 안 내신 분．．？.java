import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int [] array = new int[31];
        for(int i=0;i<28;i++) {
            int N = Integer.parseInt(br.readLine());
            array[N]++;
        }
        for(int i=1;i<=30;i++){
            if(array[i]==0) System.out.println(i);
        }
    }
}