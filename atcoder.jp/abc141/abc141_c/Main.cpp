#include<iostream>
#include<vector>
#define int long long
using namespace std;
signed main(){
    int n, k, q;
    cin >> n >> k >> q;
    vector<int> a(q), b(n);
    for (int i = 0; i < n;i++){
        b[i] = 0;
    }
    for (int i = 0; i < q; i++){
        cin >> a[i];
        b[a[i] - 1]++;
    }
    for (int i = 0; i < n; i++){
        if(q - b[i] >= k){
            cout << "No" << endl;
        }else{
            cout << "Yes" << endl;
        }
    }
    return 0;
}