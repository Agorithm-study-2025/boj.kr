#include <string>
#include <vector>
#include <unordered_map>
#include <sstream>

using namespace std;

vector<string> solution(vector<string> record) {
    vector<string> answer;
    vector<string> bucket;
    unordered_map<string, string>user;
    
    for(int i = 0; i<record.size(); i++){ // 4
        // 첫 번째 원소의 길이
        istringstream ss(record[i]); // Enter uid1234 Muzi
        string cmd, id, nickname;
        ss>>cmd>>id;
        
        if(cmd != "Leave"){
            ss>>nickname;
            user[id] = nickname;
        }
    }
    
    for(int i = 0; i<record.size(); i++){
        istringstream ss(record[i]); // Enter uid1234 Muzi
        string cmd, id, nickname;
        ss>>cmd>>id;
        
        if(cmd == "Enter"){
            answer.push_back(user[id] + "님이 들어왔습니다.");
        }
        else if(cmd == "Leave"){
            answer.push_back(user[id] + "님이 나갔습니다.");
        }
    }
    
    return answer; 
}