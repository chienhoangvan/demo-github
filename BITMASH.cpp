#include<iostream>

using namespace std;

int main(){
	int x, y;
	int a[50], b[50];
	cin >> x;
	for(int i = 0; i< x; i++){
		cin >> a[i];
	}
	cin >> y;
	for(int i = 0; i < y; i++){
		cin >> b[i]; 
	}
	int d = 0;                                       
	for(int j = 0; j < y; j++){                        
		int c = 0;
		for(int i = 0; i< x; i++){
			
			if(b[j] != a[i]){
				c++;
			  continue ;}
			else break;
		}
		if(c == x) {
		cout << "0";
		break;}
		else d++;
	}
	if ( d == y) cout << "1";
	return 0;
}
