#include <iostream>

using namespace std;

int main() {
	
	int N, A = 0, A_necessario = 1, A_dias, i;
	
	cin >> N;
	
	while(N--){
	
		
		cin >> A_dias;
		A = A + A_dias;
		if (A < 1000000){
		A_necessario++;
	}
	}

	cout << A_necessario;
	
	return 0;
}
