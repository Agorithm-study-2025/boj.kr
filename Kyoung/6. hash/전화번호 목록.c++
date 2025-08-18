#include <string>
#include <vector>
#include <unordered_set>
#include <algorithm>
using namespace std;

bool solution(vector<string> book) {
    bool answer = true;
    
    sort(book.begin(), book.end());
    
    // 모든 전화번호를 순회하며 다음 번호와 비교
    for(int i = 0; i<book.size() - 1; i++){
        // 현재 번호가 다음 번호의 접두어이면 false
        // string의 정렬 기준은 전체 길이가 아닌 각각의 정수의 크기이다
        // 11111 < 999 꼴이 되는것! 따라서 119, 119552, 973 이렇게 되는거!
        if(book[i] == book[i+1].substr(0, book[i].size())){
            return false;
        }
    }
    
    return answer;
}