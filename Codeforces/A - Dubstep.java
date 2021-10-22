import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        String s = scan.nextLine();
        while (s.contains("WUB")) {
            s = s.replace("WUB", " ");
        }
        StringBuffer s1 = new StringBuffer();
        s1.append(s);
        for(int i=0;i<s1.length();i++){
            if(s1.charAt(i)!=' '){
                break;
            }
            s1.deleteCharAt(i);
            i--;
        }
        System.out.print(s1);
 
    }
}
