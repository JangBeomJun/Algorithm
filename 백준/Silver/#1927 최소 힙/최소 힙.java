import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.PriorityQueue;
import java.util.Queue;

public class Main{
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        Queue<Integer> queue = new PriorityQueue<>();
        int N = Integer.parseInt(br.readLine());
        for(int i=0;i<N;i++){
            int x = Integer.parseInt(br.readLine());
            if(x==0 && queue.isEmpty()){
                System.out.println("0");
            }else if(x==0){
                System.out.println(queue.remove());
            }else {
                queue.add(x);
            }
        }
    }
}