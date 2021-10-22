import java.util.*;
public class Main {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        int[] a = new int[n];
        int[] b = new int[n];
        boolean state = true;
        for(int i = 0; i < n ; i++){
             a[i] = scan.nextInt();
             b[i] = scan.nextInt();
             if(a[i]!=b[i]){
                 state=false;
             }
        }
        if(!state){
            System.out.println("rated");
        }
        else{
            Arrays.sort(b);
            boolean incr = false;
            for(int i=0;i<n;i++){
                if(a[i]!=b[n-i-1]){
                    incr=true;
                    break;
                }
            }
            if (incr){
                System.out.println("unrated");
            }
            else {
                System.out.println("maybe");
            }
        }


    }

}
