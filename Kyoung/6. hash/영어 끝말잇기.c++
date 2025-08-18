#include <string>
#include <vector>
#include <iostream>
#include <unordered_set>
using namespace std;
// 중복 체크
// 끝말이었는지 체크
vector<int> solution(int n, vector<string> words) {
    vector<int> answer(2,0);
    unordered_set<string>s;
    
    s.insert(words[0]);
    for(int i=1; i<words.size(); i++){
        // set.second는 중복이 있을 경우 false 출력 / 끝말잇기가 되는지 확인
        // 만약 둘 중 하나의 경우가 틀릴경우 해당 번호를 출력
        // 중복만 생각하고 끝말잇기의 본질을 생각 못했던게 아쉬웠음
        if(!s.insert(words[i]).second || words[i].front() != words[i - 1].back()){
            answer[1] = i/n + 1; // 번호
            answer[0] = i%n + 1; // 차례
            return answer;
        }
    }
    
    return answer;
}