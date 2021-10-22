import java.util.Arrays;
import java.util.Scanner;
public class Main {
 
    public static void main(String[] args) {
        // write your code here
        Scanner scan = new Scanner(System.in);
        String s = scan.nextLine();
 
        StringBuffer word = new StringBuffer();
        word.append(s);
        word.setCharAt(0, Character.toUpperCase(word.charAt(0)));
        System.out.print(word);
 
    }
}
