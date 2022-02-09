#include <iostream>

using namespace std;

int main() {
	
	int p, r;
	
	cin >> p >> r;
	
	if ((p == 1) && (r == 0)){
		cout << "B";
	}
	if ((p == 0) && (r == 0)){
		cout << "C";
	}
	if ((p == 1) && (r == 1)){
		cout << "A";
	}
	if ((p == 0) && (r == 1)){
		cout << "C";
	}
	
	return 0;
}
