#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        if (n <= 3) {
            cout << -1 << endl;
            continue;
        }
        
        vector<int> num, num2;
        
        for (int i = 2; i <= n; i += 2) {
            num.push_back(i);
        }
        
        for (int j = 1; j <= n; j += 2) {
            num2.push_back(j);
        }
        
        
        for (int x : num) {
            cout << x << " ";
        }
        for (int x : num2) {
            cout << x << " ";
        }
        cout << endl;
    }
    
    return 0;
}