import java.util.*;
import java.io.*;

import static java.lang.Integer.parseInt;

public class Main {
    public static void main(String[] args) throws Exception{
        //
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        int n = Integer.parseInt(br.readLine());

        int [] arr = new int[n];

        int sum = 0;
        for(int i = 1; i<=n; i++){
            sum+=i;
        }

        bw.write(String.valueOf(sum));

        bw.flush();
    }
}