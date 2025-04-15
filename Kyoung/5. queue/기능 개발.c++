#include <string>
#include <vector>
#include <cmath>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    
    int n = progresses.size();
    vector<int> days(n);
    
    // 작업별 완료까지 남은 일수 계산
    for(int i=0; i<n; i++){
        // 반올림을 위한 ceil
        days[i] = ceil((100.0 - progresses[i]) / speeds[i]);
    }
    
    int count = 0; // 배포할 작업의 수
    int max_days = days[0];
    
    for(int i=0; i<n; i++){
        if(days[i] <= max_days){
            count++;
        }
        else{
            answer.push_back(count);
            count = 1;
            max_days = days[i];
        }
    }
    answer.push_back(count);
    //GG
    return answer;
}