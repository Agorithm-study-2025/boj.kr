#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> answer;
    
    //sort(num_list.begin(), num_list.end(), greater<int>()); // 역배열
    
    for(int i=num_list.size()-1; i>=0; i--)
    {
        answer.push_back(num_list[i]);
    }
    return answer;
}