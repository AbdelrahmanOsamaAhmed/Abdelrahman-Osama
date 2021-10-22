import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        String s = scan.nextLine();
        String x = scan.nextLine();
        boolean state = true;
        if (s.length() != x.length()){
            state = false;
        }
        else {
        char[] c = s.toCharArray();
        char[] c2 = x.toCharArray();
        for (int i=0;i<c.length;i++){
            if (c[i]!=c2[(c.length-1)-i]){
                state = false;
                break;
            }
        }
        }
        if (state){System.out.print("YES");}
        else {System.out.print("NO");}
    }
 
}
