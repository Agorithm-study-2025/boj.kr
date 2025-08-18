#include <string>
#include <vector>
#include <unordered_map>
#include <sstream>
#include <unordered_set>
#include <map>
using namespace std;

vector<int> solution(vector<string> id_list, vector<string> report, int k) {
    vector<int> answer;
    unordered_map<string, unordered_set<string>> check_report;
    unordered_map<string, int>result;
    
    // 신고 수 체크
    for(int i = 0; i<report.size(); i++){
        stringstream ss(report[i]); // muzi frodo
        string user_id, reported_id;
        ss>>user_id>>reported_id;
        
        // 중복 제거
        check_report[reported_id].insert(user_id); // frodo - {muzi, apeach}
    }
    
    for(auto & [reported_id, user_id] : check_report){ //frodo - {muzi, apeach}
        if(user_id.size() >=k){ // k명 이상에게 신고를 당했는지
            for(const auto & uid : user_id){ // 신고당한 횟수 기록
                result[uid]++;
            }
        }
    }
    
    for(string &id : id_list){
        answer.push_back(result[id]);
    }
    
    return answer;
}