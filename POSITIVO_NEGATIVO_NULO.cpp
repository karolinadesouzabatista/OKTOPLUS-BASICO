#include <iostream>

using namespace std; 

int main() {
	
	int x;
	cin >> x;
	if (x > 0){
		cout << "positivo";
	}
	if (x < 0){
		cout << "negativo";
	}
	if (x == 0){
		cout << "nulo";
	}
	
	return 0;
}
