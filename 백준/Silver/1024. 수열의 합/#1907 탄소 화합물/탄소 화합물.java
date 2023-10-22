import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String all = br.readLine();
        String[] expression = all.split("=");

        int[] C = new int[3];
        int[] H = new int[3];
        int[] O = new int[3];

        expression[0]+="t";
        expression[1]+="t";

        int index=0;

        for(int i=0;i<expression[0].length()-1;i++){
            int nextChar = expression[0].charAt(i+1)-'0';
            switch (expression[0].charAt(i)){
                case 'C':
                    if(1<nextChar && 10>nextChar){
                        C[index]+=nextChar;
                        i++;
                    }
                    else C[index]++;
                    break;
                case 'H':
                    if(1<nextChar && 10>nextChar){
                        H[index]+=nextChar;
                        i++;
                    }
                    else H[index]++;
                    break;
                case 'O' :
                    if(1<nextChar && 10>nextChar){
                        O[index]+=nextChar;
                        i++;
                    }
                    else O[index]++;
                    break;
                default: index++;
            }
        }
        index++;
        for(int i=0;i<expression[1].length()-1;i++){
            int nextChar = expression[1].charAt(i+1)-'0';
            switch (expression[1].charAt(i)){
                case 'C':
                    if(1<nextChar && 10>nextChar){
                        C[index]+=nextChar;
                        i++;
                    }
                    else C[index]++;
                    break;
                case 'H':
                    if(1<nextChar && 10>nextChar){
                        H[index]+=nextChar;
                        i++;
                    }
                    else H[index]++;
                    break;
                case 'O' :
                    if(1<nextChar && 10>nextChar){
                        O[index]+=nextChar;
                        i++;
                    }
                    else O[index]++;
                    break;
            }
        }

        for(int i=1;i<11;i++){
            for(int j=1;j<11;j++){
                for(int k=1;k<11;k++){

                    if(C[0]*i+C[1]*j==C[2]*k)
                        if(H[0]*i+H[1]*j==H[2]*k)
                            if(O[0]*i+O[1]*j==O[2]*k){
                                System.out.println(i+" "+j+" "+k);
                                return;
                            }

                }
            }
        }


    }
}
