import java.util.*;
import java.io.*;

import static java.lang.Integer.parseInt;

public class Main {
    public static void main(String[] args) throws Exception{
        //
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        int [] arr = new int[128]; // a ~ z
        String str;
        str = br.readLine(); // baekjoon

        for(int i = 0; i < str.length(); i++) {
            arr[(int)str.charAt(i)]++;  // 명시적 형변환
        }


        for(int i = 97; i<123; i++)
        {
            bw.write(arr[i] + " ");
        }

        bw.flush();
    }
}