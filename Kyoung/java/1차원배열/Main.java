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
        int x = Integer.parseInt(st.nextToken());

        st = new StringTokenizer(br.readLine());
        int [] arr = new int[n];
        for(int i = 0; i<n; i++)
        {
            int tmp = Integer.parseInt(st.nextToken()); // 값

            if(tmp < x)
                bw.write(String.valueOf(tmp) + " ");
        }


        bw.flush();
    }
}