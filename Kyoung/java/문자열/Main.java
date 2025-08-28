import java.util.*;
import java.io.*;

import static java.lang.Integer.parseInt;

public class Main {
    public static void main(String[] args) throws Exception{
        //
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        String str = br.readLine();

        int [] arr = new int[26];

        for(int i = 0; i<arr.length; i++)
        {
            arr[i] = -1;
        }

        for(int i = 0; i<str.length(); i++)
        {
            int tmp = str.charAt(i) - 'a';
            if(arr[tmp] != -1)
            {
                continue;
            }
            arr[tmp] = i;
        }

        for(int i = 0; i<arr.length; i++)
        {
            bw.write(String.valueOf(arr[i]) + " ");
        }

        bw.flush();
    }
}


