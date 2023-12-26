#include<iostream>
using namespace std;

int gcd(int, int);

int main(){
    int x, y;
    cin >> x >> y;
    cout << gcd(x,y);
    return 0; 
}

int gcd(int x, int y){
    if(x%y==0){
        return y;
    }
    if(x>=y){
        return gcd(x%y,y);
    }
    if(x<y){
        return gcd(y,x);
    }
    return 69;
}