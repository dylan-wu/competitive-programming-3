#include <iostream>
#include <fstream>

using namespace std;

int main() {
    int TC, a, n, p, f;

    ifstream fin ("uva-10300.in");
    ofstream fout ("uva-10300.out");

    fin >> TC;

    for(int i=0; i<TC; i++) {
        int ans = 0;
        fin >> f;
        for(int i=0; i<f; i++) {
            fin >> a >> n >> p;
            ans += a*p;
        }
        fout << ans << "\n";
    }

    return 0;
}