#include <string>
#include <vector>
#include <stack>

using namespace std;

vector<int> solution(vector<int> prices) {
    vector<int> answer(prices.size());
    stack<int> st;
    int num = prices.size();
    
    for(int i=0; i < num; i++)
    {
        while(!st.empty() && prices[st.top()] > prices[i]){
            // 현재값이 더 작을 경우
            answer[st.top()] = i - st.top();
            st.pop();
        }
        // 문제가 없다면 stack에 push
        st.push(i);
    }
    
    // 인덱스를 다 채웠을 경우
    // num - top() - 1해서 시간 맞춰주기
    while(!st.empty()){
        answer[st.top()] = num - st.top() - 1;
        st.pop();
    }
    
    return answer;
}