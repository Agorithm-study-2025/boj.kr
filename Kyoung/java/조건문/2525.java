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
        int c = parseInt(br.readLine());

        int time = b + c; // 40 + 80 = 120

        // 시간이 바뀌는 경우
        if(time >=60)
        {
            int h = time/60; // 2
            int m = time%60; // 0

            int sum_h = a + h;
            
            // 시간의 합이 정각을 넘어가는 경우
            if(sum_h >=24)
            {
                sum_h = sum_h - 24; // 0
                bw.write(sum_h + " " + m);
            }
            // 아닌경우
            else{
                bw.write(sum_h + " " + m);
            }
        }
        // 아닌경우
        else{
            bw.write(a + " " + time);
        }
        bw.flush();
    }
}