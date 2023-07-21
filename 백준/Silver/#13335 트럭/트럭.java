
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;


public class Main {
    public static void main(String[] args) throws IOException {
       BufferedReader br =new BufferedReader(new InputStreamReader(System.in));
       StringTokenizer st = new StringTokenizer(br.readLine());
       int tCount = Integer.parseInt(st.nextToken());
       int [] truck = new int[tCount];
       int length = Integer.parseInt(st.nextToken());
       int maxWeight = Integer.parseInt(st.nextToken());
       st = new StringTokenizer(br.readLine());
       for(int i=0;i<tCount;i++){
           truck[i]=Integer.parseInt(st.nextToken());
       }
       int start=0,end=1,nowWeight=0,answer=0;
       int [] how = new int [tCount];
       boolean flag=false;
       nowWeight+=truck[0];
       while(start!=tCount){
           answer++;
           for(int i=start;i<end;i++){
               how[i]++;
               if(how[i]>length){
                   start++;
                   nowWeight-=truck[i];
               }
               if(end<tCount && maxWeight>=nowWeight+truck[end] && flag){
                   nowWeight+=truck[end];
                   end++;
                   flag=false;
               }
           }
           flag=true;

       }
        System.out.println(answer);
    }
}