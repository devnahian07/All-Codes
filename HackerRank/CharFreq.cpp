#include<bits/stdc++.h>

#define int long long

using namespace std;

signed main(){
    string s;
    cin >> s;
    map<char, int> freq;
    for(int i = 0; i < s.size(); i++){
        freq[s[i]]++;
    }
    char c;
    cin >> c;
    cout << freq[c] << "\n";
    return 0;
}