
import javax.swing.plaf.IconUIResource;
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.*;

public class Main{
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int T = Integer.parseInt(br.readLine());
        StringTokenizer st;
        for(int i=0;i<T;i++){
            String p = br.readLine();
            int n = Integer.parseInt(br.readLine());
            String numString = br.readLine();
            int [] array = new int[n];
            int sIndex=0,eIndex;
            numString = numString.substring(1,numString.length()-1);
            st = new StringTokenizer(numString,",");
            int a=st.countTokens();
            for (int j=0;j<a;j++){
                array[sIndex++] = Integer.parseInt(st.nextToken());
            }
            sIndex=0;
            eIndex=n;
            boolean flag=true,pass=false;
            for(int j=0;j<p.length();j++){
                if (p.charAt(j) == 'R') {
                    flag=!flag;
                }else {
                    if(flag) sIndex++;
                    else eIndex--;
                }
                if(sIndex>eIndex) {
                    pass=true;
                    break;
                }
            }
            if(pass){
                System.out.println("error");
                continue;
            }
            System.out.print('[');
            if(eIndex==sIndex){
                System.out.println(']');
                continue;
            }
            if(flag){
                for(int j=sIndex;j<eIndex-1;j++){
                    System.out.print(array[j]+",");
                }
                System.out.println(array[eIndex-1]+"]");
            }else{
                for(int j=eIndex-1;j>sIndex;j--){
                    System.out.print(array[j]+",");
                }
                System.out.println(array[sIndex]+"]");
            }
        }
    }
}