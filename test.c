#include <iostream>
#include <string>
#include<vector>

using namespace std;

string _a[] = { "abc", "def","ghi","jkl","mno","pqrs","tuv","wxyz"," " };
int A[128];
vector<int> f;
 
void init(){
    for(auto i: _a){
        for(int j = 0; j < i.length(); j++)
            A[i[j]] = j + 1;
    }
}
int main()
{
    init();
    int t, ans, n;
    string s;
    
    cin >> t;
    int _t = t;
    cin.ignore();
    cout << "T = " << _t << "\n";
    while(t--){
        ans = 0;
        getline(cin, s);
        for(auto i : s)
            ans += A[i];
        cout << ans << "\n";
    }
    return 0;
}