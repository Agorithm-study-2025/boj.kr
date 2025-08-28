import java.util.*;
import java.io.*;

import static java.lang.Integer.parseInt;

public class Main {
    public static void main(String[] args) throws Exception{
        //
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        StringTokenizer st = new StringTokenizer(br.readLine());
        int n = Integer.parseInt(st.nextToken());
        int m = Integer.parseInt(st.nextToken());
        int [] arr = new int[n];

        for(int i = 1; i<=n; i++)
        {
            arr[i-1] = i;
        }

        for(int cnt = 0; cnt<m; cnt++) {
            st = new StringTokenizer(br.readLine());
            int i = Integer.parseInt(st.nextToken());
            int j = Integer.parseInt(st.nextToken());
            i = i-1;
            j = j-1;
            for (int k = 0; k < (j-i+1) / 2; k++) {

                int tmp = arr[i + k];
                arr[i + k] = arr[j - k];
                arr[j - k] = tmp;
            }
        }
        for(int i = 0; i<n; i++)
        {
            bw.write(String.valueOf(arr[i]) + " ");
        }

            bw.flush();
        }
    }

