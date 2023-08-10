import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.*;

public class Main{
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int N = Integer.parseInt(br.readLine());
        int answer=0;
        boolean flag;
        for(int i=0;i<N;i++){
            List<Character> alphabet = new ArrayList<>();
            String string = br.readLine();
            flag=true;
            for(int j=1;j<string.length();j++){
                if(!Objects.equals(string.charAt(j),string.charAt(j-1))){
                    if(alphabet.contains(string.charAt(j-1))){
                        flag=false;
                        break;
                    }
                    alphabet.add(string.charAt(j-1));
                }
            }
            if(alphabet.contains(string.charAt(string.length()-1))) flag=false;
            if(flag) answer++;
        }
        System.out.println(answer);
    }
}