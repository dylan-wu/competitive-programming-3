#include <fstream>
#include <iostream>
using namespace std;

int main() {
    ifstream fin ("uva-11044.in");
    ofstream fout ("uva-11044.out");
    int tests;
    int w, h;
    fin >> tests;
    for(int i=0; i<tests; i++) {
        fin >> w >> h;
        fout << (w/3)*(h/3) << "\n";
    }

	return 0;
}