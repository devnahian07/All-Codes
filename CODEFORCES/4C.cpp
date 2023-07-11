#include<bits/stdc++.h>

#define int long long

using namespace std;

signed main(){
    int t;
    cin >> t;
    map<string, int> names;
    for(int i = 0; i < t; i++){
        string s;
        cin >> s;
        if(names.find(s) == names.end()){
            cout << "OK\n";
            names[s] = 1;
        }
        else{
            string tmp = s;
            int x = names[s];
            string nm;
            while(x>0){
                nm.push_back(('0'+(char)(x%10)));
                x/=10;
            }
            reverse(nm.begin(), nm.end());
            cout << (s+nm) << "\n";
            names[tmp]++;
        }
    }
    return 0;
}