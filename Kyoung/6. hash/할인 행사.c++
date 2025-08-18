#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

int solution(vector<string> want, vector<int> number, vector<string> discount) {
    int answer = 0;
    
    unordered_map<string, int>wantMap;
    
    // 비교할 값 미리 채워주기
    for(int i=0; i<want.size(); i++){
        wantMap[want[i]] = number[i]; // banana = 3
    }
    
    for(int i = 0; i < discount.size() - 9; i++){
        // 비교할 map 셋팅 (이걸 생각 못했네..)
        // i일 회원가입 시 할인받을 수 있는 품목을 키, 개수 값으로 선언
        unordered_map<string, int>tmpMap;
        
        // 각 할인 품목을 키로 개수 저장
        for(int j=0; j<10; j++){
            tmpMap[discount[j+i]]++;
        }
        
        // 할인 상품의 품목 및 개수가 원하는 상품의 품목 및 개수와 일치하면 카운트 증가
        if(tmpMap == wantMap){
            answer++;
        }
    }
    
    
    
    return answer;
}