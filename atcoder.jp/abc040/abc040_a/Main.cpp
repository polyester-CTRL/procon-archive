#include<iostream>
using namespace std;
int main(){
    double n, a;
    cin >> n >> a;
    if(n/2>=a){
        cout << a - 1 << endl;
    }else{
        cout << n - a << endl;
    }
    return 0;
}