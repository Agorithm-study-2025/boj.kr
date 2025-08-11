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
        int l = Integer.parseInt(st.nextToken());

        int num = 0;

        if(n == m && m == l)
        {
            num = 10000 + n*1000;
            bw.write(String.valueOf(num));
        }
        else if(n == m && n!=l || n == l&& m!=l){
            num = 1000 + n*100;
            bw.write(String.valueOf(num));
        }
        else if(m == l&& m!=n){
            num = 1000 + m*100;
            bw.write(String.valueOf(num));
        }


        else
        {
            int k = Math.max(n,m);
            num = Math.max(k,l);
            num = num * 100;
            bw.write(String.valueOf(num));
        }

        bw.flush();
    }
}