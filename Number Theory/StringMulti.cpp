#include<bits/stdc++.h>

#define int long long

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string t1, t2;
    cin >> t1 >> t2;
    string a = t1, b = t2;
    if(a[0]=='-') a.erase(a.begin());
    if(b[0]=='-') b.erase(b.begin());
    vector<string> lines;
    if(b.size() > a.size()){
        string tmp = a;
        a = b;
        b = tmp;
    }
    for(int i = b.size()-1, k = 0; i >= 0; i--, k++){
        string f;
        for(int l = 0; l < k; l++) f.push_back('0');
        int car = 0;
        for(int j = a.size()-1; j >= 0; j--){
            int dig = ((b[i]-'0')*(a[j]-'0'));
            dig+=car;
            f.push_back((char)((dig%10)+48));
            car = dig/10;
        }
        if(car>0) f.push_back((char)(car+48));
        reverse(f.begin(), f.end());
        lines.push_back(f);
    }
    int l = lines.back().size();
    int car = 0;
    string f;
    for(int i = 0; i < l; i++){
        int sum = 0;
        for(int j = lines.size()-1; j >= 0; j--){
            if(lines[j].size() == 0) break;
            int d = lines[j].back() - '0';
            lines[j].pop_back();
            sum+=d;
        }
        sum+=car;
        f.push_back((char)((sum%10)+48));
        car = sum/10;
    }
    if(car>0) f.push_back((char)(car+48));
    reverse(f.begin(), f.end());
    if((t1[0]=='-' && t2[0]!='-') || (t2[0]=='-' && t1[0]!='-')) cout << '-';
    cout << f << "\n";
    return 0;
}