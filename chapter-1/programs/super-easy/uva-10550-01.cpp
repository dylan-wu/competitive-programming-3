#include <iostream>
using namespace std;

int output(int init, int c1, int c2, int c3) {
	int ans = 1080;
    int a = (init - c1) > 0 ? (init - c1) * 9 : (init - c1 + 40) * 9;
    cout << a << endl;
    int b = (c2 - c1) > 0 ? (c2 - c1) * 9 : (c2 - c1 + 40) * 9;
    cout << b << endl;
    int c = (c2 - c3) > 0 ? (c2 - c3) * 9 : (c2 - c3 + 40) * 9;
    cout << c << endl;
    return ans + a + b + c;
}

int main() {
    int init, c1, c2, c3;
    init = 0, c1 = 15, c2 = 25, c3 = 8;
    cout << output(init, c1, c2, c3);
}