import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.LinkedList;
import java.util.Objects;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int N = Integer.parseInt(br.readLine());
        LinkedList<String> come = new LinkedList<>();
        for(int i=0;i<N;i++){
            come.add(br.readLine());
        }
        int overtaking=0;
        for(int i=0;i<N;i++){
            String car = br.readLine();
            if(!Objects.equals(come.peek(), car)){
                overtaking++;
            }
            come.remove(car);
        }
        System.out.println(overtaking);
    }
}
