import java.util.Scanner;
 
public class Main {
 
    public static void main(String[] args) {
        // write your code here
        Scanner scan = new Scanner(System.in);
        int x = scan.nextInt();
        scan.nextLine();
        char[] lon = new char[2];
        for (int i = 0; i < x; i++) {
            String s = scan.nextLine();
            if (s.length() > 10) {
                lon[0] = s.charAt(0);
                lon[1] = s.charAt(s.length() - 1);
                System.out.println((lon[0]) + "" + (s.length() - 2) + "" + (lon[1]));
 
            } else {
                System.out.println(s);
            }
 
        }
    }
}
