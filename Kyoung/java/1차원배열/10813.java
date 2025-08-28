import java.util.*;
import java.io.*;

import static java.lang.Integer.parseInt;

public class Main {
    public static void main(String[] args) throws Exception{
        //
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        StringTokenizer st = new StringTokenizer(br.readLine());
        int n = Integer.parseInt(st.nextToken());
        int m = Integer.parseInt(st.nextToken());

        int [] arr = new int[n];

        for(int i = 0; i<n; i++)
        {
            arr[i] = i+1; // 1 2 3 4 5
        }

        for(int i = 0; i<m; i++)
        {
            st = new StringTokenizer(br.readLine());
            int a = Integer.parseInt(st.nextToken());
            int b = Integer.parseInt(st.nextToken());

            a = a - 1;
            b = b - 1;

            int tmp = arr[a];
            arr[a] = arr[b]; // 1->2
            arr[b] = tmp; // 2->1

        }

        for(int i = 0; i<n; i++)
        {
            bw.write(String.valueOf(arr[i]) + " ");
        }
        bw.flush();
    }
}