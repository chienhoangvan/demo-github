#include<iostream>
#include<string>

using namespace std;

 string a[1000000];
 
int main(){
	int n;
	cin >> n;
	cin.ignore();
	for(int i = 0; i < n; i++){
		getline(cin,a[i]);
	}
	for(int i = 0; i< n; i++){
		int x = a[i].length();
		int sum = 0;
		for(int j = 0; j < x; j++){
			if(a[i][j] == 'a' || a[i][j] == 'd' || a[i][j] == 'g' || a[i][j] == 'j' || a[i][j] == 'm' || a[i][j] =='p' || a[i][j] =='t' || a[i][j] =='w' || a[i][j] == ' ')
				{
				sum += 1;
				}
			else if(a[i][j] == 'b' || a[i][j] == 'e' || a[i][j] == 'h' || a[i][j] == 'k' || a[i][j] == 'n' || a[i][j] == 'q' || a[i][j] == 'u' || a[i][j] == 'x')
				{
				sum += 2;
				}
			else if(a[i][j] == 'c' || a[i][j] == 'f' || a[i][j] == 'i' || a[i][j] == 'l' || a[i][j] == 'o' || a[i][j] == 'r' || a[i][j] == 'v' || a[i][j] == 'y')
				{
				sum += 3;
				}
			else if(a[i][j] == 's' || a[i][j] == 'z')
				{
				sum += 4;
				}
			}
		cout << "Case" << " #" << i+1 << ": " << sum << endl;
	}
	return 0;
}
