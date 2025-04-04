#include <string>
#include <vector>
#include <queue>

using namespace std;

string solution(vector<string> cards1, vector<string> cards2, vector<string> goal) {
    string answer = "";
    int cnt = 0;
    queue<string>q1;
    queue<string>q2;
    
    for(int i=0; i<cards1.size(); i++){
        q1.push(cards1[i]);
    } // i, water, drink
    
    for(int i=0; i<cards2.size(); i++){
        q2.push(cards2[i]);
    } // want, to
    
    for(int i = 0; i<goal.size(); i++){
        if(goal[i] == q1.front() || goal[i] == q2.front()){
            if(goal[i] == q1.front()){
                cnt++;
                q1.pop();
            }
            else if(goal[i] == q2.front()){
                cnt++;
                q2.pop();
            }
            else{
                return "No";
            }
        }
        else{
            return "No";
        }
    }
    
    if(cnt == goal.size()){
        return "Yes";
    }
}