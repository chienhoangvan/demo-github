#include<iostream>

using namespace std;

int main(){
 long long a, b;
 cin >> a >> b;
 long long x = (a + b) % (1000000007);
 cout << x;
 return 0;	
}
