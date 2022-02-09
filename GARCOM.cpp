#include <iostream>

using namespace std;

int main() {
    
    int num, l, c, quebrados = 0;
    
    cin >> num;
    
    while (num--) {
        cin >> l >> c;
        
        if (l > c)
            quebrados = quebrados + c;
    }
    
    cout << quebrados << endl;

    return 0;
}
