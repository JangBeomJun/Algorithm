import java.util.Scanner;
public class Main{
	public static void main(String[] args) {
		int[] num = new int[41]; 
		num[0] = 0; 
		num[1] = 1; 
		num[2] = 1; 
		for(int i=3;i<41;i++) num[i]=num[i-1]+num[i-2];
		Scanner a=new Scanner(System.in);
		int s= a.nextInt();
		for(int i=1;i<=s;i++) {
			int d=a.nextInt();
			if(d==0) System.out.println("1 0");
			else {
				System.out.printf("%d %d\n",num[d-1],num[d]);
			}
		}
	}
}