#include<bits/stdc++.h>

using namespace std;

int main(){
    // vector<int> basket; // empty vector
    // basket.push_back(1);
    // cout << basket[0];
    // basket.pop_back();
    // vector<float> prices = {3.5, 4.2, 5.5, 1.0, 7.8}; // vector with initialization
    // prices.push_back(0);
    // for(int i = 0; i < 6; i++) cout << prices[i] << "\n";
    // cout << prices[6] << "\n";
    // vector<int> box = {3, 1, 5, 5, 6, 7, 1, 2, 8, 4};
    // int var = box[4]*box[9];
    // cout << var << "\n";
    // cout << *(box.begin());
    // cout << *(box.end()-1);
    vector<float> prices = {1.1, 4.5, 2.5, 6.3, 2.3, 4.8, 3.6, 7.2};
    // prices.pop_back();
    // prices.erase(prices.begin()+1);
    // cout << *(prices.begin()) << "\n";
    // prices.erase(prices.begin()+2); // to erase the 3rd item
    // prices.erase(prices.end()-3); // to erase the 3rd item
    // int a = prices.end()-prices.begin(); // vector length, cause --> prices.begin()+5 = prices.end() => prices.end() - prices.begin() = 5 !
    // cout << a << "\n";
    // cout << prices.size() << "\n"; // .size() --> does the same thing
    // for(int i = 0; i < prices.size(); i++) cout << prices[i] << "\n";
    // prices.erase(prices.begin()+1, prices.begin()+1+3);
    // //                                  ------> excluded
    // for(int i = 0; i < prices.size(); i++) cout << prices[i] << "\n";
    int left, right;
    cin >> left >> right;
    prices.erase(prices.begin()+left-1, prices.begin()+right); // dynamic
    prices.insert(prices.begin()+2, 1.9);
    //for(auto x: prices) cout << x << " ";
    // insert and erase are so time consuming, insert can't be used to insert multiple elements at once
    cout << prices.front() << " " << prices.back() << "\n";
    return 0;
}