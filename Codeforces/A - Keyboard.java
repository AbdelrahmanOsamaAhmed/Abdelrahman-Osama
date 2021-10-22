import java.util.*;
public class Main {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        String first = "qwertyuiop";
        String second = "asdfghjkl;";
        String third = "zxcvbnm,./";
        String dir = scan.nextLine();
        char[] msg = scan.nextLine().toCharArray();
        StringBuilder real = new StringBuilder();
        if(dir.equals("R")){
            for (char c : msg) {
                if (first.indexOf(c) != -1) {
                    real.append(first.charAt(first.indexOf(c) - 1));
                } else if (second.indexOf(c) != -1) {
                    real.append(second.charAt(second.indexOf(c) - 1));
                } else if (third.indexOf(c) != -1) {
                    real.append(third.charAt(third.indexOf(c) - 1));
                }
            }
        }
        else {
            for (char c : msg) {
                if (first.indexOf(c) != -1) {
                    real.append(first.charAt(first.indexOf(c) + 1));
                } else if (second.indexOf(c) != -1) {
                    real.append(second.charAt(second.indexOf(c) + 1));
                } else if (third.indexOf(c) != -1) {
                    real.append(third.charAt(third.indexOf(c) + 1));
                }
            }
        }
        System.out.println(real);
    }
 
}
