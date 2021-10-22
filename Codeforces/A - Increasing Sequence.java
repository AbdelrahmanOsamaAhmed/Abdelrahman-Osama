import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        int d = scan.nextInt();
        int counter = 0;
        double[] arr = new double[n];
        for (int i=0;i<n;i++){
            arr[i]=scan.nextDouble();
        }
        for (int i=1;i<n;i++){
            double x = arr[i] / arr[i - 1];
            if(x == 1){
                arr[i]+=d;
                counter++;
            }
            else if (x < 1){
                double y = (arr[i-1]-arr[i])/(d);
                y = ((int) y )+ 1;
                arr[i] = arr[i] + y * d;
                counter += y;
            }
        }
        System.out.print(counter);
    }
}
