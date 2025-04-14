#include <iostream>
#include <vector>

using namespace std;

// 전위순회 (루트 → 왼쪽 → 오른쪽)
string preorder(vector<int> &nodes, int idx){
    if(idx >= nodes.size()) return "";
    
    string ret = to_string(nodes[idx]) + " ";
    ret += preorder(nodes, idx * 2 + 1);
    ret += preorder(nodes, idx * 2 + 2);
    return ret;
}

// 중위순회 (왼쪽 → 루트 → 오른쪽)
string inorder(vector<int> &nodes, int idx){
    if(idx >= nodes.size()) return "";
    
    string ret = "";
    ret += inorder(nodes, idx * 2 + 1);
    ret += to_string(nodes[idx]) + " ";
    ret += inorder(nodes, idx * 2 + 2);
    return ret;
}

// 후위순회 (왼쪽 → 오른쪽 → 루트)
string postorder(vector<int> &nodes, int idx){
    if(idx >= nodes.size()) return "";
    
    string ret = "";
    ret += postorder(nodes, idx * 2 + 1);
    ret += postorder(nodes, idx * 2 + 2);
    ret += to_string(nodes[idx]) + " ";
    return ret;
}

int main()
{
    int n;
    cin >> n;
    vector<int> nodes;
    
    for(int i = 0; i<n; i++){
        int t;
        cin >> t;
        nodes.push_back(t);
    }
    
    string pre = preorder(nodes, 0);
    string in = inorder(nodes, 0);
    string post = postorder(nodes, 0);
    
    cout << pre << "\n";
    cout << in << "\n";
    cout << post << "\n";
    
    return 0;
}
