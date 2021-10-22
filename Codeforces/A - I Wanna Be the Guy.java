import java.util.*;
public class Main {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        boolean[] states = new boolean[n];
        boolean finale = true;
        int p = scan.nextInt();
        int[] x = new int[p];
        for (int i = 0; i < p; i++) {
            x[i] = scan.nextInt();
            states[x[i]-1]=true;
        }
        int q = scan.nextInt();
        int[] y = new int[q];
        for (int i = 0; i < q; i++) {
            y[i] = scan.nextInt();
            states[y[i]-1]=true;
        }
        for (boolean c : states) {
            if (!c) {
                finale = false;
                break;
 
            }
        }
        if(finale){System.out.println("I become the guy.");}
        else {System.out.println("Oh, my keyboard!");}
 
 
    }
 
}
