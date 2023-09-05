#include<bits/stdc++.h>

#define int long long

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int ar[5][1];
    for(int i = 1; i < 5; i++) ar[i][0] = 0;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        ar[x][0]++;
    }
    int car = 0;
    car+=ar[4][0];
    ar[4][0] = 0;
    int tmp = min(ar[3][0], ar[1][0]);
    car+=tmp;
    ar[3][0]-=tmp;
    ar[1][0]-=tmp;
    int tmp2 = (ar[2][0]*2);
    car+=(tmp2/4);
    ar[2][0]-=(2*(tmp2/4));
    int lst = ceil(((double)(ar[2][0]*2) + (double)ar[1][0])/((double)4));
    car+=lst;
    ar[2][0] = max((long long)0, (ar[2][0]-(2*lst)));
    ar[1][0] = max((long long)0, (ar[1][0]-(4*lst)));
    for(int i = 1; i < 5; i++){
        if(ar[i][0] > 0) car+=ar[i][0];
    }
    cout << car << "\n";
    return 0;
}