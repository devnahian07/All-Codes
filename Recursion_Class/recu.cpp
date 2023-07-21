#include<iostream>

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

int main(){
    int x;
    cin >> x;
    cout << fibo(x) << "\n";
    return 0;
}