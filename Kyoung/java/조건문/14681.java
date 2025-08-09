import java.util.*;
import java.io.*;

import static java.lang.Integer.parseInt;

public class Main {
    public static void main(String[] args) throws Exception{
        // 14681 사분면고르기
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));


        int a = parseInt(br.readLine());
        int b = parseInt(br.readLine());

        if(a > 0 && b > 0){
            bw.write("1");
        }
        else if(a < 0 && b > 0){
            bw.write("2");
        }
        else if(a < 0 && b < 0){
            bw.write("3");
        }
        else if(a > 0 && b < 0){
            bw.write("4");
        }

        bw.flush(); // 버퍼 비우기 (필수)
        bw.close(); // 자원 해제
    }
}