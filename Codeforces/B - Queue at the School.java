import java.util.Arrays;
import java.util.Scanner;
public class Main {
 
    public static void main(String[] args) {
        // write your code here
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        int t = scan.nextInt();
        int i = 0;
        scan.nextLine();
        String q = scan.nextLine();
        char[] queue = q.toCharArray();
        while (i<t){
            for (int j=1;j<queue.length;j++){
                if (queue[j-1]=='B'&&queue[j]=='G'){
                    queue[j-1]='G';
                    queue[j]='B';
                    j++;
                }
            }
            i++;
        }
        for(int j=0;j< queue.length;j++){
            System.out.print(queue[j]);
        }
 
 
    }
}
