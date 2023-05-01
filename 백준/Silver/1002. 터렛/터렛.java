import java.util.Scanner;
import java.lang.Math;
public class Main{
	public static void main(String[] args) {
		Scanner a=new Scanner(System.in);
		int s=a.nextInt();
		int i,bgrc,k;
		double xr,yr,gr;
		for(i=1;i<=s;i++) {
			int x=a.nextInt();
			int y=a.nextInt();
			int g=a.nextInt();
			int x1=a.nextInt();
			int y1=a.nextInt();
			int g1=a.nextInt();
			xr= x1-x;
			yr= y1-y;
			xr*=xr;
			yr*=yr;
			xr+=yr;
			gr=Math.sqrt(xr);
			bgrc=g>g1? g-g1:g1-g;
			
			if(gr==0 && g==g1)k=-1;
			else if(gr==g+g1 || bgrc==gr) k=1;
			else if(gr<g+g1 && gr>bgrc) k=2;
			else k=0;
			System.out.println(k);
		}
	}
	
}