
import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st;
        st = new StringTokenizer(br.readLine());
        int N = Integer.parseInt(st.nextToken());
        int M = Integer.parseInt(st.nextToken());
        int [] array = new int[N];
        for(int l=0;l<M;l++){
            st = new StringTokenizer(br.readLine());
            int i=Integer.parseInt(st.nextToken())-1;
            int j=Integer.parseInt(st.nextToken())-1;
            int k=Integer.parseInt(st.nextToken());
            for(;i<=j;i++){
                array[i]=k;
            }
        }
        for(int i=0;i<N;i++){
            System.out.print(array[i]+" ");
        }
    }
}