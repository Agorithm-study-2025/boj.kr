import java.util.*;
import java.io.*;

import static java.lang.Integer.parseInt;

public class Main {
    public static void main(String[] args) throws Exception{
        // 2753 윤년
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(br.readLine());

        if((n%4 == 0 && n%100 !=0) || (n%400 == 0)){
            System.out.println("1");
        }
        else{
            System.out.println("0");
        }

    }
}