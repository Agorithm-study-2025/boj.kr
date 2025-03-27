// 실패율
// pair를 사용 잘해야 함 또한 내림차순 하는법도 잘 알아야함
#include <string>
#include <vector>
#include<algorithm>

using namespace std;

vector<int> solution(int N, vector<int> stages) {
    vector<int> answer;
    vector<int> challenger(N + 2); //성공한 도전자
    vector<float> fail(N+2, 0.0); // 실패한 도전자
    
    // 성공, 실패 도전자 수 구하기
    for(int i=0; i<stages.size(); ++i) // 8번 
    {
        challenger[stages[i]]++; // 각 단계별 인원 추가
    }
    
    int total = stages.size(); // 8
    for(int i=1; i<=N; i++) // 1/8, 2/7, 2/4, 1/2, 0/1
    {
        // 실패율 계산
        if(total !=0)
        {
            fail[i] = (float)challenger[i]/total;
            total -=challenger[i];
        }
        else{
            fail[i] = 0;
        }
    }
    
    // 스테이지 번호와 실패율을 쌍으로 저장
    vector<pair<int, float>>pairs;
    for(int i=1; i<=N; i++)
    {
        pairs.push_back({i, fail[i]});
    }
    
    // 실패율을 기준으로 내림차순 정렬 (실패율이 같으면 스테이지 번호 오름차순)
    sort(pairs.begin(), pairs.end(), [](pair<int, float> a, pair<int, float> b)
         {
             if(a.second == b.second) return a.first < b.first;
             else return a.second > b.second;
         });         
    for(int i=0; i<N; i++)
    {
        answer.push_back(pairs[i].first);
    }
    
    return answer;
}