#include<bits/stdc++.h>

using namespace std;

int main(){
    queue<int> arr;
    arr.push(1);
    arr.push(2);
    arr.push(3);
    // arr.pop();
    // cout << arr.front();
    while(!arr.empty()){
        cout << arr.front() << "\n";
        arr.pop();
    }
    return 0;
}