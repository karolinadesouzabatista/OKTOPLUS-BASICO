#include <iostream>

using namespace std;

int main() {
	
	int b, c, result;
	
	cin >> b >> c;
	
	result = b + c;
	if (result % 2 == 0){
		cout << "Bino";
	}
	else{
		cout << "Cino";
	}

	return 0;
}
