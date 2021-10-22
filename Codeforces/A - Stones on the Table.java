import java.util.Scanner;
public class Main {
 
    public static void main(String[] args) {
        // write your code here
        Scanner scan = new Scanner(System.in);
        int x = scan.nextInt();
        scan.nextLine();
        String s = scan.nextLine();
        int num=0;
        for (int i=0;i<s.length();i++){
            if (i+1<s.length()){
                if (s.charAt(i)==s.charAt(i+1)){
                    num++;
                }
            }
        }
        System.out.print(num);
 
 
 
    }
}
