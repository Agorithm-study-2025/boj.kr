import java.util.*;
import java.io.*;

import static java.lang.Integer.parseInt;

public class Main {
    public static void main(String[] args) throws Exception{
        //
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bew = new BufferedWriter(new OutputStreamWriter(System.out));


        int a = parseInt(br.readLine());
        int b = parseInt(br.readLine());
	
	int time = b - 45;
       	if(time >=0){
		System.out.print(a + " " + time);
	}
	else{
		ch_time = 60 + time;
		if(a == 0){
			a = 24 - 1;
			System.out.print(a + " " + ch_time);
		}
		else if(a !=0){
			a = a - 1;
			System.out.print(a + " " + ch_time);
		}	
	}
    }
}