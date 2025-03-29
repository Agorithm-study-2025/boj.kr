// 10진수를 2진수로 변환하기

#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main()
{
    stack<int>st;
    int decimal;
    cin>>decimal;
    
    if(decimal == 0){
        cout<<"0";
        return 0;
    }
    
    while(decimal > 0)
    {
        st.push(decimal%2);
        decimal = decimal/2;
    }
    string s ="";
    while(!st.empty()){
        s+=to_string(st.top());
        st.pop();
    }
    cout<<s;

    return 0;
}