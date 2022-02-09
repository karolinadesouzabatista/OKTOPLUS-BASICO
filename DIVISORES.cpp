#include <iostream>

using namespace std;

int main() {
	
	int x, div = 1;
	
	cin >> x;
	while(div <= x){
	if ( x % div == 0){
		cout << div << " ";
	}
	div++; 
}


	return 0;
}
