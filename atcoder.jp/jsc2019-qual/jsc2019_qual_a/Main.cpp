#include<iostream>
using namespace std;
int main(){
    int m, d;
    cin >> m >> d;
    int d1 = 2, d10 = 2;
    int ans = 0;
    for (int month = 3; month <= m;month++) {
        for (d10 = 2; d10 * 10 + d1 <= d; d10++) {
            for (d1 = 2; d1 < 10 && d10 * 10 + d1 <= d; d1++) {
                if (d1 * d10 == month) {
                    ans++;
                }
            }
            d1 = 2;
        }
        d10 = 2;
    }
    cout << ans << endl;
    return 0;
}
