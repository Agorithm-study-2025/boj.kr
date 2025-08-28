import java.util.*;
import java.io.*;

import static java.lang.Integer.parseInt;

public class Main {
    public static void main(String[] args) throws Exception{
        //
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        int X = Integer.parseInt(br.readLine());
        int [] arr = new int[X];

        for(int i = 0; i<X; i++)
        {
            StringTokenizer st = new StringTokenizer(br.readLine());
            int a = Integer.parseInt(st.nextToken());
            int b = Integer.parseInt(st.nextToken());
            arr[i] = a+b;

        }

        for(int i = 0; i<X; i++){
            bw.write(String.valueOf(arr[i]));
            bw.newLine();
        }

        bw.flush();
    }
}