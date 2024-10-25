#include <iostream>
using namespace std;
//brute force through the system.
int main()
{
    int n, m, a = 0, b = 0;
    cin >> n >> m;
    int count = 0;
    for (int i = 0; i < 300; i ++) {
        for (int j = 0; j < 300; j++) {
            if (i*i + j == n && i + j*j == m) {
                count++;
            }
        }
    }
    cout << count << endl;
    return 0;
}
