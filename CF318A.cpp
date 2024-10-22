#include <bits/stdc++.h>
using namespace std;
//Took way too long to figure out and a hint to isolate for a formula - intial approach was brute force smh
int main() {
	unsigned long long a, b;
	cin >> a >> b;
	if (b <= a/2 && a%2 == 0) { //case for odd and even a
		cout << 2*(b-1) + 1 << endl;
	}
	else if (b <= (a+1)/2 && a%2 != 0) { //case for odd and odd a
		cout << 2*(b-1) + 1 << endl;
	}
	else if (a%2 == 0){ //case for even and even a
		cout << 2*((b-1)-((a/2)-1));
	}
	else if (a%2 != 0){ //case for even num and odd a
		cout << 2*((b-1)-((a/2)));
	}
}
