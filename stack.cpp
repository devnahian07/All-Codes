#include<bits/stdc++.h>

using namespace std;

int main(){
    stack<int> arr;
    arr.push(1);
    arr.push(2); // insertion
    arr.push(0);
    // cout << arr.top() << "\n";
    // arr.pop(); // deletion of the last element
    // cout << arr.top() << "\n";
    while(!arr.empty()){
        cout << arr.top() << "\n";
        arr.pop();
    }
    return 0;
}