#include<iostream>
#include<vector>
using namespace std;
int main(){
    int L, h, n;
    cin >> L >> h >> n;
    vector<int> a(n);
    for (int i = 0; i < n;i++){
        cin >> a[i];
    }
    for (int i = 0; i < n;i++){
        if(a[i]<L){
            cout << L - a[i] << endl;
        }else if(a[i]>h){
            cout << -1 << endl;
        }
        else{
            cout << 0 << endl;
        }
    }
}
