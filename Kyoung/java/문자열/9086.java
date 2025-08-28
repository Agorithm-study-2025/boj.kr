import java.util.*;
import java.io.*;

import static java.lang.Integer.parseInt;

public class Main {
    public static void main(String[] args) throws Exception{
        //
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        int n = Integer.parseInt(br.readLine());

        for(int i = 0; i<n; i++) {
            String str = br.readLine();

            if (str.length() == 1) {
                bw.write(str + str + "\n");
                continue;
            }
            char ch1 = str.charAt(0);
            char ch2 = str.charAt(str.length()-1);
            bw.write(String.valueOf(ch1) + String.valueOf(ch2) + "\n");

        }

        bw.flush();
    }
}

