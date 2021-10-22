import java.util.ArrayList;
import java.util.Arrays;
import java.util.Locale;
import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        scan.nextLine();
        char[] c = scan.nextLine().toLowerCase().toCharArray();
        ArrayList<Character>arr = new ArrayList<>();
        boolean state = true;
        Arrays.sort(c);
        for (char a : c) {
            arr.add(a);
        }
        for(int i=1;i< arr.size();i++){
            if(arr.get(i)==arr.get(i-1)){
                arr.remove(i);
                i--;
            }
        }
        StringBuilder x = new StringBuilder();
        for(char a : arr){
            x.append(a);
        }
        String fin = x.toString();
        if(fin.contains("abcdefghijklmnopqrstuvwxyz")) System.out.println("YES");
        else System.out.println("NO");
    }
}
