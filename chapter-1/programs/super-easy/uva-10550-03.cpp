#include <iostream>
#include <fstream>
using namespace std;

int output(int init, int c1, int c2, int c3, int c4) {
	int ans = 1080;
    int a = (init - c1) > 0 ? (init - c1) * 9 : (init - c1 + 40) * 9;
    int b = (c2 - c1) > 0 ? (c2 - c1) * 9 : (c2 - c1 + 40) * 9;
    int c = (c2 - c3) > 0 ? (c2 - c3) * 9 : (c2 - c3 + 40) * 9;

    return ans + a + b + c;
}

int main() {
    ifstream fin ("uva-10550.in");
    ofstream fout ("uva-10550.out");
    int init, c1, c2, c3, c4;
    fin >> init >> c1 >> c2 >> c3 >> c4;
    fout << output(init, c1, c2, c3, c4);

    return 0;
}