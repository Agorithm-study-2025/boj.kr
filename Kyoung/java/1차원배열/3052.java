import java.util.*;
import java.io.*;

import static java.lang.Integer.parseInt;

public class Main {
    public static void main(String[] args) throws Exception{
        //
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        int [] arr = new int[10]; // 0 ~ 9
        int [] find = new int[42]; //0 ~ 0

        // 값 입력
        for(int i = 0; i<arr.length; i++)
        {
            int tmp = Integer.parseInt(br.readLine());
            arr[i] = tmp % 42;
        }

        // 중복되는 값 모아보기
        for(int i = 0; i<arr.length; i++)
        {
            find[arr[i]]++;
        }

        int cnt = 0;
        
        // 1이상(나머지값)인 값은 cnt++하기
        for(int i = 0; i<find.length; i++)
        {
            if(find[i] >= 1)
            {
                cnt++;
            }
        }

        bw.write(String.valueOf(cnt));
        bw.flush();
    }
}