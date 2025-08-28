import java.util.*;
import java.io.*;

import static java.lang.Integer.parseInt;

public class Main {
    public static void main(String[] args) throws Exception{
        //
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        StringTokenizer st = new StringTokenizer(br.readLine());

        String str1 = st.nextToken(); // 734
        String str2= st.nextToken(); // 893

        String str_1="";
        String str_2="";

        for(int i = 2; i>=0; i--)
        {
            str_1 += str1.charAt(i);
            str_2 += str2.charAt(i);
        }

        int num1 = Integer.parseInt(str_1);
        int num2 = Integer.parseInt(str_2);

        if(num1 > num2)
        {
            bw.write(String.valueOf(num1));
        }


        else
        {
            bw.write(String.valueOf(num2));
        }
        bw.flush();
    }
}

