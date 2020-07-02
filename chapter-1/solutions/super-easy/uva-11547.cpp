#include <cmath>
#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream fin ("uva-11547.in");
    ofstream fout ("uva-11547.out");
    int tc;
    long long n;
    fin >> tc;
    for(int i=0; i<tc; i++) {
        fin >> n;
        n = abs((((n*63+7492)*5-498)/10)%10);
        fout << n << "\n";
    }

    return 0;
}