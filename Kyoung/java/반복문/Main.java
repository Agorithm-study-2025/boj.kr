import java.util.*;
import java.io.*;

import static java.lang.Integer.parseInt;

public class Main {
    public static void main(String[] args) throws Exception{
        //
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        int X = Integer.parseInt(br.readLine());

        for(int i = 0; i<X; i++)
        {
            for(int j = X-i; j>1; j--)
            {
                bw.write(" ");
            }

            for(int k = 0; k<=i; k++)
            {
                bw.write("*");
            }
            bw.newLine();
        }


        bw.flush();
    }
}