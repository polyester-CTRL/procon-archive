#include<iostream>
using namespace std;
int main(){
    int a, b;
    cin >> a >> b;
    int ans = 0;
    for (int i = 0; a % b != 0;i++){
        ans++;
        a++;
    }
    cout << ans << endl;
    return 0;
}