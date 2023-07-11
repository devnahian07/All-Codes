#include<bits/stdc++.h>

#define int long long

using namespace std;

signed main(){
    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
        string a, b;
        cin >> a >> b;
        if(a.back()=='S' && (b.back()=='L' || b.back()=='M')){
            cout << '<' << '\n';
            continue;
        }
        if((a.back()=='L' || a.back()=='M') && b.back()=='S'){
            cout << '>' << '\n';
            continue;
        }
        if(a.back()=='L' && (b.back()=='S' || b.back()=='M')){
            cout << '>' << '\n';
            continue;
        }
        if((a.back()=='S' || a.back()=='M') && b.back()=='L'){
            cout << '<' << '\n';
            continue;
        }
        if(a.back()==b.back()){
            int x1 = 0;
            for(int j = 0; a[j]=='X'; j++) x1++;
            int x2 = 0;
            for(int j = 0; b[j]=='X'; j++) x2++;
            if((a.back()=='S' && b.back()=='S') && (x1>x2)) cout << '<' << "\n";
            else if((a.back()=='S' && b.back()=='S') && (x1<x2)) cout << '>' << "\n";
            else if((a.back()=='L' && b.back()=='L') && (x1>x2)) cout << '>' << "\n";
            else if((a.back()=='L' && b.back()=='L') && (x1<x2)) cout << '<' << "\n";
            else cout << '=' << '\n';
        }
    }
    return 0;
}