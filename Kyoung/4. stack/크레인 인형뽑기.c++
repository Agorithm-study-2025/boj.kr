#include <string>
#include <vector>
#include <stack>

using namespace std;

int solution(vector<vector<int>> board, vector<int> moves) {
    int answer = 0;
    stack<int> st[board.size()];
    
    //스택이기 때문에 역순환을 하여서 맨아래있는 원소부터 push
    for(int i=board.size() - 1; i>=0; i--){
        for(int j=0; j<board.size(); j++)
        {
            if(board[i][j] > 0){
                st[j].push(board[i][j]);
            }
        }
    }
    // 1. 비어있을 경우 -> 무조건 push
    // 2. 안 비어있을 경우
    // 2.1 top과 현재 푸쉬할 원소가 같을경우 -> pop하면서 +2
    // 2.2 top != 푸쉬할 원소 -> 원소 푸쉬
    stack<int> bucket;
    // 1 3 5 ... 순으로 i가 값을 가짐
    for(int i:moves){
        // 스택 원소의 개수 반환
        // 블럭이 있을 경우(empty로도 가능함)
        if(!st[i - 1].empty()){
            int doll = st[i - 1].top();
            st[i - 1].pop();
            // bucket에 블럭이 있고, 가장 최근에 들어간 블러과 현재 블럭이 같은지 확인
            if(!bucket.empty() && bucket.top() == doll){
                bucket.pop();
                answer+=2;
            }
            else{
                bucket.push(doll);
            }
        }
        // 비어있다면 PASS
        else{
            continue;
        }
        
    }
    
    return answer;
}