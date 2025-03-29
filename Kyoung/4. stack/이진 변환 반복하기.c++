#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(string s) {
    vector<int> answer(2,0); //[x.y]
    
    while(s.size()!=1)
    {
        int len = 0;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i] == '0'){
                answer[1] ++;
            }
            else{
                len++;
            }
        }
        // 나머지 몫 구하기
        s="";
        while(len){
            s +=to_string(len%2); // 나머지
            len=len/2; // 몫
        }
        reverse(s.begin(), s.end());
        answer[0]++;
    }
    
    return answer;
}