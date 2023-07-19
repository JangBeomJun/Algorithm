
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;


public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int arrSize = Integer.parseInt(br.readLine());
        StringTokenizer st = new StringTokenizer(br.readLine());
        int [] array = new int[arrSize];
        for(int i=0;i<arrSize;i++){
            array[i]=Integer.parseInt(st.nextToken());
        }
        int loop = Integer.parseInt(br.readLine());
        for(int i=0;i<loop;i++){
            st = new StringTokenizer(br.readLine());
            int sex = Integer.parseInt(st.nextToken());
            int num = Integer.parseInt(st.nextToken());
            if(sex==1){
                for(int j=num;j<=arrSize;j+=num){
                    if(array[j-1]==1) array[j-1]=0;
                    else array[j-1]=1;
                }
            }else if(sex==2){
                num--;
                int j=0;
                while(true){
                    j++;
                    if(num-j<0 || num+j>=arrSize) break;
                    if(array[num-j]!=array[num+j]) break;
                }
                j--;
                if (j != 0) {
                    for (; j > 0; j--) {
                        if (array[num - j] == 1) array[num - j] = 0;
                        else array[num - j] = 1;

                        if (array[num + j] == 1) array[num + j] = 0;
                        else array[num + j] = 1;
                    }
                }
                if(array[num]==1) array[num]=0;
                else array[num]=1;
            }
        }
        for(int k=0;k<arrSize;k++){
            if(k==arrSize-1) System.out.print(array[k]);
            else System.out.print(array[k]+" ");

            if((k+1)%20==0) System.out.println();
        }
    }
}