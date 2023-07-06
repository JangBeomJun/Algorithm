import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.Collections;
import java.util.StringTokenizer;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader bf = new BufferedReader(new InputStreamReader(System.in));
        String s = bf.readLine();
        StringTokenizer st = new StringTokenizer(s);
        int vertical = Integer.parseInt(st.nextToken());
        int horizontal = Integer.parseInt(st.nextToken());
        char[][] crossword = new char[vertical+1][horizontal+1];
        for(int i=0;i<vertical;i++){
            s = bf.readLine();
            for(int j=0;j<horizontal;j++){
                crossword[i][j]=s.charAt(j);
            }
        }
        ArrayList<String> answer = new ArrayList<>();
        StringBuilder comparison= new StringBuilder();
        for(int i=0;i<vertical;i++){
            for(int j=0;j<horizontal;j++){
                if(crossword[i][j]!='#') comparison.append(crossword[i][j]);
                else{
                    if(comparison.length()>1){
                        answer.add(comparison.toString());
                    }
                    comparison = new StringBuilder();
                }
            }
            if(comparison.length()>1){
                    answer.add(comparison.toString());
            }
            comparison = new StringBuilder();
        }
        for(int i=0;i<horizontal;i++){
            for(int j=0;j<vertical;j++){
                if(crossword[j][i]!='#') comparison.append(crossword[j][i]);
                else{
                    if(comparison.length()>1){
                        answer.add(comparison.toString());
                    }
                    comparison = new StringBuilder();
                }
            }
            if(comparison.length()>1){
                answer.add(comparison.toString());
            }
            comparison = new StringBuilder();
        }
        Collections.sort(answer);
        System.out.println(answer.get(0));
    }
}