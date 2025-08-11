import java.util.*;
import java.io.*;

import static java.lang.Integer.parseInt;

public class Main {
    public static void main(String[] args) throws Exception{
        //
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));


        StringTokenizer st = new StringTokenizer(br.readLine());

        int a = Integer.parseInt(st.nextToken());
        int b = Integer.parseInt(st.nextToken());

        int time = b - 45;
        if(time >=0){
            bw.write(a + " " + time);
        }
        else{
            int ch_time = 60 + time;
            if(a == 0){
                a = 24 - 1;
                bw.write(a + " " + ch_time);
            }
            else if(a !=0){
                a = a - 1;
                bw.write(a + " " + ch_time);
            }
        }
        bw.flush();
    }
}