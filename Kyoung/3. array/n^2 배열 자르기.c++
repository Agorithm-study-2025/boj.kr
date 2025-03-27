#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, long long left, long long right) {
    vector<int> answer;
    
    for(long long  i= left; i<right + 1; i++)
    {
        long long a = i%n; // 행
        long long b = i/n; // 열
        int value= 0;
        
        if(a > b)
        {
            value = a+1;
        }
        else{
            value = b+1;
        }
        
        answer.push_back(value);
    }
    return answer;
}