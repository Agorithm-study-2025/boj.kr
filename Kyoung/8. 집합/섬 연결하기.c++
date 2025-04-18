#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int getParent(int idx, vector<int>&nodes){
    if(nodes[idx] == idx) return idx; // 부모가 같음
    return nodes[idx] = getParent(nodes[idx], nodes);
}

// 단일 벡터 자체가 잘못된 접근
// 출발, 도착, 비용 선정   
// 크루스칼 알고리즘 활용(최소 신장트리)
// 같은 집합이 된다는 것은 사이클이 생긴다는 의미
int solution(int n, vector<vector<int>> costs) {
    int answer = 0;
    vector<int> nodes(n);
    
    // 크기가 고정되어있을 경우는 push_back 하면안됨
    for(int i = 0; i<n; i++){
        nodes[i] = i; // 1 2 3 4
    }
    
    // cost를 기준으로 오름차순정렬
    sort(costs.begin(), costs.end(), [](vector<int>&a, vector<int>&b){
        return a[2] < b[2]; // 오름차순으로 정렬
    });
       
    for(int i = 0; i<costs.size(); i++){
        int from = getParent(costs[i][0], nodes);
        int to = getParent(costs[i][1], nodes);
        int cost = costs[i][2]; 
        
        if(from != to){ // 부모가 다
            answer+=cost;
            // 집합 형성 0->1->2->3
            nodes[from] = to;
        }
        
    }
    return answer;
}