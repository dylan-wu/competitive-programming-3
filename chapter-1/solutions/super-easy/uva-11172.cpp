#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream fin ("uva-11172.in");
    ofstream fout ("uva-11172.out");
    int tests, a, b;
    fin >> tests;
    for(int i=0; i<tests; i++) {
        fin >> a >> b;
        if(a < b) {
            fout << "<" << "\n";
        } else if(a > b) {
            fout << ">" << "\n";
        } else {
            fout << "=" << "\n";
        }
    }
}