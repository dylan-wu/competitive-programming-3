#include <iostream>
#include <fstream>
using namespace std;

int main() {
    int tests, n, r, l, pos;
    ifstream fin ("uva-11364.in");
    ofstream fout ("uva-11364.out");
    fin >> tests;
    for(int i=0; i<tests; i++) {
        fin >> n;

        r = -1000000000;
        l = 1000000000;
        for(int j = 0; j < n; j++) {
            fin >> pos;
            if(pos > r)
                r = pos;
            if(pos < l)
                l = pos;
        }
        fout << 2*(r-l) << "\n";
    }

    return 0;
}