
import java.util.*;

public class Solution {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n1 = in.nextInt();
        int n2 = in.nextInt();
        int n3 = in.nextInt();
        int sum1 = 0, sum2 = 0, sum3 = 0;

        int h1[] = new int[n1];
        for (int h1_i = 0; h1_i < n1; h1_i++) {
            h1[h1_i] = in.nextInt();
            sum1 += h1[h1_i];
        }
        int h2[] = new int[n2];
        for (int h2_i = 0; h2_i < n2; h2_i++) {
            h2[h2_i] = in.nextInt();
            sum2 += h2[h2_i];
        }
        int h3[] = new int[n3];
        for (int h3_i = 0; h3_i < n3; h3_i++) {
            h3[h3_i] = in.nextInt();
            sum3 += h3[h3_i];
        }

        System.out.println("Start: " + sum1 + " " + sum2 + " " + sum3);
        // In case they provided us full result
        if (sum1 == sum2 && sum2 == sum3) {
            System.out.println(sum1);
            System.exit(0);
        }

        int i = 0, j = 0, k = 0;

        while (!(sum1 == sum2 && sum2 == sum3)) {
            if (sum1 > sum2 || sum1 > sum3) {
                // Decrement it
                while (sum1 > sum2 || sum1 > sum3)
                    sum1 -= h1[i++];
            } else if (sum2 > sum1 || sum2 > sum3) {
                while (sum2 > sum1 || sum2 > sum3)
                    sum2 -= h2[j++];
            } else if (sum3 > sum1 || sum3 > sum2) {
                while (sum3 > sum1 || sum3 > sum2)
                    sum3 -= h3[k++];
            }

        }
        System.out.println(sum1);
        in.close();
        // System.out.println("The end: "+sum1+" "+sum2+" "+sum3);
    }
}