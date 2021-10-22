import java.util.Arrays;
import java.util.Scanner;
 
public class Main {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int x = scan.nextInt();
        scan.nextLine();
        char[] c = scan.nextLine().toCharArray();
        int ant=0;
        int dan=0;
        for (int i=0;i<c.length;i++){
            if (c[i]=='D'){
                dan++;
            }
            else if (c[i]=='A') {ant++;}
        }
        
        if (ant>dan) {
            System.out.print("Anton");
        }
        else if (ant == dan){
            System.out.print("Friendship");
        }
        else {System.out.print("Danik");}
    }
 
}
