import java.util.Scanner;
public class Main {
  public static void main(String[] args) {
      Scanner scan = new Scanner(System.in);
      String x = scan.nextLine();
      char[] arr = x.toCharArray();
      int count =0;
      boolean state=true;
      for (int i=0;i<arr.length;i++){
          if(arr[i]=='4' || arr[i] == '7'){
              count++;
          }
      }
      char[] counter = Integer.toString(count).toCharArray();

              for (int i=0;i<counter.length;i++){
          if (counter[i]!='4'&&counter[i]!='7'){
              state = false;
              break;
          }

      }
      if(state){System.out.print("YES");}
      else {System.out.print("NO");}
  }

}
