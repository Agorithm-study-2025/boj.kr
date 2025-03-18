#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int main()
{
    vector<int> vec;`
    for(int i=0; i<5; i++)
    {
        int n;
        cin>>n;
        vec.push_back(n);
    }
    sort(vec.begin(), vec.end());
    
    for(int i=0; i<5; i++)
    {
        cout<<vec[i]<<" ";
    }

    return 0;
}