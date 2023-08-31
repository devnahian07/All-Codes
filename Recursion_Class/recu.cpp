#include<bits/stdc++.h>

using namespace std;

int factorial(int n){
    if(n<=0) return 1;
    return n*factorial(n-1); 
}

int fibo(int n){
    if(n==1) return 0;
    if(n==2) return 1;
    else return fibo(n-1)+fibo(n-2);
}

string rev(string s){
    if(s=="") return "";
    return rev(s.substr(1, s.size()-1)) + s[0];
}

vector<string> perm(string s){
    if(s==""){
        vector<string> res = {""};
        return res;
    }
    int l = s.size();
    vector<string> res;
    for(int i = 0; i < l; i++){
        char ch = s[i];
        string tmp = s.substr(0, i)+s.substr(i+1, l-i-1);
        vector<string> temp_res = perm(tmp);
        cout << "All perm for: " << tmp << "\n";
        for(int j = 0; j < temp_res.size(); j++){
            cout << temp_res[j] << "\n";
            string p = ch + temp_res[j];
            res.push_back(p);
        }
    }
    return res;
}

struct Position{
    int r, c;
};

bool is_valid(Position p, vector<Position> pos){
    for(auto x: pos){
        if(x.c == p.c) return false;
        if(abs(x.c - p.c) == abs(x.r - p.r)) return false;
    }
    return true;
}

int nqueen(int queen_left, vector<Position>pos){
    if(queen_left == 1){
        for(auto x: pos){
            cout << "{" << x.r << ", " << x.c << "} ";
        }
        cout << "\n";
        return 1;
    }
    int queen_no = 8 - queen_left + 1; // row for the queen
    int ans = 0;
    for(int col = 1; col <= 8; col++){
        Position cur_pos = Position{queen_no, col};
        if(is_valid(cur_pos, pos)){
            pos.push_back(cur_pos);
            ans += nqueen(queen_left - 1, pos);
            pos.pop_back();
        }
    }
    return ans;
}

int main(){
    // int x;
    // cin >> x;
    // cout << rev("defg") << "\n";
    // vector<string> res = perm("abcd");
    // cout << "Final Permutation:" << "\n";
    // for(auto x: res) cout << x << " ";
    vector<Position> pos;
    cout << nqueen(8, pos) << "\n";
    return 0;
}