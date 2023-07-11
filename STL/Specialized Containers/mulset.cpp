#include<iostream>
#include<set>

using namespace std;

int main(){
    multiset<int> myset;
    myset.insert(5);
    myset.insert(6);
    myset.insert(5);
    myset.insert(8);
    // for(auto it = myset.begin(); it != myset.end(); it++){
    //     cout << *it << " ";
    // }
    // cout << myset.count(5) << "\n";
    // auto it2 = myset.find(5);
    // myset.erase(it2);
    // cout << myset.count(5) << "\n";
    // cout << "\n";
    
    return 0;
}