import java.util.*;
import java.io.*;

import static java.lang.Integer.parseInt;

public class Main {
    public static void main(String[] args) throws Exception{
        //
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        int [] arr = new int[28];
        int [] res = new int[2];

        for(int i = 0; i<28; i++)
        {
            arr[i] = Integer.parseInt(br.readLine());
        }

        int cnt = 0;
        for(int i = 1; i<=30; i++)
        {
            boolean found = false;
            int tmp = 0;
            for(int j = 0; j<arr.length; j++)
            {
                if(arr[j] == i){
                    found = true;
                    break;
                }
            }
            if(!found)
            {
                res[cnt++] = i;
            }
        }

        Arrays.sort(res);
        for(int i = 0; i<res.length; i++)
        {
            bw.write(String.valueOf(res[i]));
            bw.newLine();
        }
        bw.flush();
    }
}