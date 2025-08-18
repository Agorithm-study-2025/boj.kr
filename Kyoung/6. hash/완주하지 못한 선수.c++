#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

// key - value 활용!
// 이름 - 이름 개수로 하면 됨!
string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    unordered_map<string, int>m;
    
    for(int i=0; i<participant.size(); i++){
        m[participant[i]]++;
    } // eden, kiki
    
    for(int i=0; i<completion.size(); i++){
        m[completion[i]]--;
    }
    
    for(int i=0; i<participant.size(); i++){
        if(m[participant[i]] == 1){
            return participant[i];
        }
    }
    
    return answer;
}