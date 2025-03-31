#include <string>
#include <vector>
#include <stack>
#include <unordered_map>

// map 사용해야함

using namespace std;

// key value 선언 - 닫힌 괄호가 나올 때 pop하기 위해서
unordered_map<char, char> pairs = {{')', '('}, {']', '['}, {'}', '{'}}; 

// 인수로 받은 문자열 기준 괄호의 짝이 맞는지 확인
bool isValid(string &s, int start){
    stack<char> st;
    int sz = s.size();
    
    // 문자열 순회
    for(int i = 0; i<sz; i++)
    {
        char ch = s[(start + i) % sz]; //0 1 2 3 4 5
        
        // ch가 닫힌 괄호일 경우
        // key가 존재하는지 확인
        if(pairs.count(ch)){
            // 스택이 비어있거나 top 원소가 ch와 짝이 맞는 열린 괄호가 아니면 false 반환
            if(st.empty() || st.top() !=pairs[ch]){
                return false;
            }
            // ch와 짝이 맞는 열린 괄호면 해당 열린 괄호 제거
            st.pop();
        }else{
            // 열린괄호 무조건 push
            st.push(ch);
        }
    }
    return st.empty();
    
}

int solution(string s) {
    int answer = 0;
    
    for(int i=0; i<s.size(); i++)
    {
        answer+=isValid(s, i);
    }
    
    return answer;
}