#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
        int n;
        cin >> n;
        int sum = 0;
        int evc = 0;
        int odc = 0;
        for(int j = 0; j < n; j++){
            int x;
            cin >> x;
            x%2==0 ? evc++ : odc++;
            sum+=x;
        }
        if(sum%2!=0) cout << "YES" << "\n";
        else{
            if(evc!=0 && odc!=0) cout << "YES" << "\n";
            else cout << "NO" << "\n";
        }
    }
    return 0;
}