#include<bits/stdc++.h>

#define int long long

using namespace std;

signed main(){
    int q;
    cin >> q;
    set<int> nums;
    for(int i = 0; i < q; i++){
        int x;
        cin >> x;
        if(x==1){
            int n;
            cin >> n;
            nums.insert(n);
        }
        else if(x==2){
            int n;
            cin >> n;
            if(nums.find(n)!=nums.end()){
                nums.erase(n);
            }
        }
        else{
            int n;
            cin >> n;
            if(nums.find(n) != nums.end()) cout << "Yes\n";
            else cout << "No\n";
        }
    }
    return 0;
}