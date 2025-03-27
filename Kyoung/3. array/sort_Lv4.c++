// 모의고사
// 모듈러 패턴 이용하기

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> first = {1,2,3,4,5};
    vector<int> second = {2,1,2,3,2,4,2,5};
    vector<int> third = {3,3,1,1,2,2,4,4,5,5};
    vector<int> answer;
    vector<int>matchCnt(3); // 최종 후보보
    for(int i = 0; i<answers.size(); i++)
    {
        if(answers[i] == first[i % first.size()]){ // 모듈러 패턴을 이용하여 무한 반복
            matchCnt[0] ++;
        }
        if(answers[i] == second[i % second.size()])
        {
            matchCnt[1]++;
        }
        if(answers[i] == third[i % third.size()]){
            matchCnt[2]++;
        }
    }
    
    int max_score = *max_element(matchCnt.begin(), matchCnt.end());
    
    for(int i=0; i<3; i++)
    {
        if(matchCnt[i] == max_score){
            answer.push_back(i+1);
        }
    }
    
    
    
    return answer;
}