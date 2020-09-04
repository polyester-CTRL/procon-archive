#include<iostream>
using namespace std;
int main(){
    long long int x;
    cin >> x;
    for (long long int i = 0; i <= x;i++){
        if(x==i*i*i*i){
            cout << i << endl;
            break;
        }
    }
    return 0;
}
