#include<iostream>
#include<string>

using namespace std;

string a[100];

int main(){
	int n;
	cin >> n;
	
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	for(int i = 0; i < n;i++){
		int x = a[i].length();
		if( x <= 10) cout << a[i] << endl;
		else cout << a[i][0] << x-2 << a[i][x-1] << endl;
	}
	return 0;
}
