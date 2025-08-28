import java.util.*;
import java.io.*;

import static java.lang.Integer.parseInt;

public class Main {
    public static void main(String[] args) throws Exception{
        //
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        int n = Integer.parseInt(br.readLine()); // 3
        int [] arr = new int[n];

        StringTokenizer st = new StringTokenizer(br.readLine());
        int sum = 0;
        for(int i= 0; i<n; i++)
        {
            arr[i] = Integer.parseInt(st.nextToken());	//40 80 60
            sum+=arr[i]; // 180
        }

        Arrays.sort(arr);

        float max = arr[n-1]; // 정수 나눗셈 방지
        float result = (sum/max*100)/n; // 180/80*100/3

        // bw.write(String.valueOf(arr[n-1] + "\n"));
        bw.write(String.valueOf(result));

        bw.flush();
    }
}

