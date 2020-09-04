#include<iostream>
#include<cmath>
#define int long long
using namespace std;
signed main(){
    int n;
    cin >> n;
    int k = n;
    int m = 1;
    int max = n,flag=0;

    for (int i = sqrt(k); i >= 1; i--)
    {
        if (n % i == 0)
        {
            n /= i;
            m *= i;
        }
        if (m + n < max){
            max = m + n;
            flag = 1;
        }
    }

        
            //cout << n << " ";
            //cout << m * n << " ";
    if(flag==1){

            cout << max - 2 << endl;
    }else{
        cout << max - 1 << endl;
        
    }
    
    
    return 0;
}