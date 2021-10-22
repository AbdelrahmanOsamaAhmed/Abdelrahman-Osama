import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        String[] cons = {"I hate ","I love "};
        int x=0;
        String[] word = new String[n];
        for (int i=0;i<n-1;i++){
            word[i]=cons[x]+"that ";
            x++;
            System.out.print(word[i]);
            if(x>1){
                x=0;
            }
        }
        if (x==0){
            System.out.print("I hate it");
        }
        else {System.out.print("I love it");}
 
    }
}
