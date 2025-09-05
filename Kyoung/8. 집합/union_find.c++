#include <iostream>
#include <vector>
using namespace std;

vector<int> parent;
vector<int> rankData;

int CharToInt(char c){
    return c - '0';
}

// 루트값 확인인
int find(int x){
    if(parent[x] == x) return x;
    return parent[x] = find(parent[x]); // 경로 압축
}

void unionSet(int x, int y){
    int root1 = find(x);
    int root2 = find(y);

    // 서로 값이 다를경우 랭크 확인
    if(root1 != root2){
        if(rankData[root1] < rankData[root2]){
            parent[root1] = root2;
        }
        else if(rankData[root1] > rankData[root2]){
            parent[root2] = root1;
        }
        // 랭크의 크기가 같은 경우 루트값 선정후 증가시켜주기.
        else{
            parent[root2] = root1;
            rankData[root1]++;
        }
    }
}

int main(){
    int k = 3;

    vector<vector<char>> operation = {
        {'u', '0', '1'},
        {'u', '1', '2'},
        {'f', '0', '2'}
    };
    
    // 벡터이기 때문에 parent, rankData 크기 미리 할당하기
    parent.resize(k);
    rankData.resize(k, 0);
    for(int i = 0; i < k; i++){
        parent[i] = i;
    }

    vector<bool> result;

    for(const auto& op : operation){
        int x = CharToInt(op[1]);
        int y = CharToInt(op[2]);

        if(op[0] == 'u'){
            unionSet(x, y);
        }
        else if(op[0] == 'f'){
            int x = CharToInt(op[1]);
            int y = CharToInt(op[2]);
            result.push_back(find(x) == find(y));
        }
    }

    // 루트가 서로 다르다 = 다른 그래프이다를 의미미
    for(bool b : result){
        cout << (b ? "같은 집합입니다" : "다른 집합입니다") << endl;
    }

    return 0;
}
