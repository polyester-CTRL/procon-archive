#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin >> n;
    int ans = 0;
    vector<int> a(n), b(n), c(n);
    for (int i = 0; i < n;i++){
        cin >> a[i];
    }
    for (int i = 0; i < n;i++){
        cin >> b[i];
        ans += b[i];
    }
    for (int i = 0; i < n - 1;i++){
        cin >> c[i];
    }
    for (int i = 0; i < n - 1;i++){
        if(a[i] == a[i + 1] - 1){
            ans += c[a[i] - 1];
        }
    }
    cout << ans << endl;
    return 0;
}