#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int x,y;  
    cin >> x;
    y=x/100;
    if( (1 <=y)&&(y<= 12)&&(1 <=(x-y*100))&&((x-y*100)<= 12) )
    {
    cout<< "AMBIGUOUS" << endl;    
}
    else if ( (1 <=y)&&(y<= 12) )
    {
        cout<< "MMYY" <<endl;
    }
    else if ((1 <=(x-y*100))&&((x-y*100)<= 12))
    {
        cout<< "YYMM" <<endl;
    }
    else {
        cout<< "NA" <<endl;
    }
}
    
