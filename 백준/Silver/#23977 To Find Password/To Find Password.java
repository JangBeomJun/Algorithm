
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br =new BufferedReader((new InputStreamReader(System.in)));
        String num = br.readLine();
        StringTokenizer st = new StringTokenizer(num);
        int key=Integer.parseInt(st.nextToken());
        int a = Integer.parseInt(st.nextToken());
        long[] array = new long[a];
        num = br.readLine();
        st = new StringTokenizer(num);
        for(int i=0;i<a;i++){
            array[i]=Integer.parseInt(st.nextToken());
        }
        long answer = getLCM(array);
        System.out.println(answer-key);
    }
    public static long getLCM(long[] arr) {
        if (arr.length == 1) {
            return arr[0];
        }

        long gcd = getGCD(arr[0], arr[1]);
        long lcm = (arr[0] * arr[1]) / gcd;

        for (int i = 2; i < arr.length; i++) {
            gcd = getGCD(lcm, arr[i]);
            lcm = (lcm * arr[i]) / gcd;
        }

        return lcm;
    }
    public static long getGCD(long num1, long num2) {
        if (num1 % num2 == 0) {
            return num2;
        }
        return getGCD(num2, num1 % num2);
    }
}