import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int T = Integer.parseInt(br.readLine());
        int x;
        PriorityQueue<Integer> pqHightest = new PriorityQueue<>(Collections.reverseOrder());
        for(int i=0;i<T;i++){
            x = Integer.parseInt(br.readLine());
            if(x==0){
                if(pqHightest.isEmpty()){
                    System.out.println("0");
                }else{
                    System.out.println(pqHightest.poll());
                }
            }else{
                pqHightest.add(x);
            }
        }
    }
}
