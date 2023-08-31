#include<bits/stdc++.h>

#define int long long

using namespace std;

const int mod = 1e9 + 7; // mod will work faster if the value is constant

vector<int> ar(1e5, -1);

int fib(int n){
    if(n==0 || n==1) return 1;
    else if(ar[n]==-1){
        ar[n] = fib(n-1)+fib(n-2);
        return ar[n];
    }
    else if(ar[n]!=-1) return ar[n];
}

int POW(int a, int b){
    if(b == 0) return 1;
    int r = POW(a, b/2);
    if(b%2 == 0) return (r * r) % mod;
    else return ((((r * r) % mod) * a) % mod);
}

/*
2 ^ 4
*/

bool BS(int i, int e, int n, vector<int>ar){
    if(i == e){
        return (ar[i]==n);
    }
    int mid = (i+e)/2;
    if(ar[mid] == n) return true;
    if(ar[mid]>n) return BS(i, mid-1, n, ar);
    else if(ar[mid]<n) return BS(mid+1, e, n, ar);
}

vector<int> Sort(vector<int> a, vector<int> b){
    vector<int> res;
    int idx1 = 0;
    int idx2 = 0;
    while(idx1<a.size() && idx2<b.size()){
        if(a[idx1] < b[idx2]) res.push_back(a[idx1]), idx1++;
        else res.push_back(b[idx2]), idx2++;
    }
    while(idx1 < a.size()) res.push_back(a[idx1]), idx1++;
    while(idx2 < b.size()) res.push_back(b[idx2]), idx2++;
    return res;
}

vector<int> merge_sort(vector<int> ar){
    if(ar.size() <= 1) return ar;
    vector<int> a, b;
    for(int i = 0; i < ar.size(); i++){
        if((2*i) < ar.size()) a.push_back(ar[i]);
        else b.push_back(ar[i]);
    }
    a = merge_sort(a);
    b = merge_sort(b);

    return Sort(a, b);
}

signed main(){
    // int n;
    // cin >> n;
    // cout << fib(n) << "\n";
    // cout << POW(2, 5) << "\n";
    // int n;
    // cin >> n;
    // vector<int> ar(n);
    // for(int i = 0; i < n; i++) cin >> ar[i];
    // sort(ar.begin(), ar.end());
    // int x; cin >> x;
    // BS(0, n-1, x, ar) ? cout << "Yes\n" : cout << "No\n";

    // vector<int> a = {4, 5, 8, 9, 13};
    // vector<int> b = {6, 7, 12, 15, 19, 20};
    // vector<int> res = Sort(a, b);
    // for(auto x: res) cout << x << " ";
    // cout << "\n";

    vector<int> ar = {7, 5, 8, 9, 12, 13, 4, 6, 20, 19};
    vector<int> res = merge_sort(ar);
    for(auto x: res) cout << x << " ";
    cout << "\n";
    return 0;
}