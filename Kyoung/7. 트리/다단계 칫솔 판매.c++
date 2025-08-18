#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> solution(vector<string> enroll, vector<string> referral, vector<string> seller, vector<int> amount) {
    vector<int> answer;
    unordered_map<string, string>parent;
    
    // parent는 판매원 - 판매원을 참여시킨 추천인
    for(int i = 0; i<enroll.size(); i++){
        parent[enroll[i]] = referral[i]; // sam - edward
    }
    
    // 합계를 모두 0으로 초기화
    unordered_map<string, int> total;
    for(const auto &name : enroll){
        total[name] = 0; // sam = 0;
    }
    
    for(int i = 0; i<seller.size(); i++){
        int money = amount[i] * 100; // 1200
        string cur_name = seller[i]; // young
        
        while(money > 0 && cur_name !="-"){
            // 추천인이 존재하는 돈 입금과정
            int dis_money = money / 10; // 120 12 1 
            total[cur_name] += money - dis_money; // 1080 , 180 + x
            
            // 추천인이 존재할 경우 현재 이름을 추천인 이름으로 변경 - 짝이 존재한다는 의미미
            // parent.end()의 의미는 못찾았다는 의미
            if(parent.find(cur_name) != parent.end()){
                // 키값 변경
                cur_name = parent[cur_name]; 
            }
            // 없다면 종료
            else{
                break;
            }
            // 수익금 업데이트
            money = dis_money;
        }
    }
    for(const auto & name : enroll){
        int num = total[name]; // john -> 1080
        answer.push_back(num);
    }
    
    
    
    return answer;
}