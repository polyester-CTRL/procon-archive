#include<iostream>
#include<string>
using namespace std;

int main() {
	int x,a,b;
	cin >> x>>a>>b;
	x = (x - a) % b;
	cout << x <<endl;


}