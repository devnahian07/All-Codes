#include<set>
#include<iostream>

using namespace std;

int main(){
    set<string> myset;
    myset.insert("tanveer");
    myset.insert("nahian");
    myset.insert("sachin");
    myset.insert("kajol");
    myset.insert("tanveer");
    cout << myset.size() << "\n";
    for (auto i = myset.begin(); i != myset.end(); i++)
    {
        cout << *i << " ";
    }
    cout << "\n";
    myset.erase("nahian");
    for (auto i = myset.begin(); i != myset.end(); i++)
    {
        cout << *i << " ";
    }
    cout << "\n";
    if((myset.find("nahian")!=myset.end())) cout << "Y\n";
    else cout << "N\n";
    return 0;
}