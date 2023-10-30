import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int T,n,answer,temporary;
        T = Integer.parseInt(br.readLine());
        for(int i=0;i<T;i++){
            answer=0;
            n = Integer.parseInt(br.readLine());
            Map<String,Integer> wear = new HashMap<>();
            for(int j=0;j<n;j++){
                String string = br.readLine();
                String[] clothes = string.split(" ");
                if(wear.containsKey(clothes[1])){
                    wear.put(clothes[1], wear.get(clothes[1])+1);
                }else{
                    wear.put(clothes[1],1);
                }
            }
            Collection<Integer> values  = wear.values();
            List<Integer> numberOfCases = new ArrayList<>(values);
            for(int k=0;k<numberOfCases.size();k++){
                temporary=1;
                for(int l=k+1;l<numberOfCases.size();l++){
                    temporary*=(numberOfCases.get(l)+1);
                }
                answer+=numberOfCases.get(k)*temporary;
            }
            System.out.println(answer);
        }
    }
}
