#include <iostream>
#include <fstream>

using namespace std;

int main() {
    char a;
    ifstream fin ("uva-01124.in");
    ofstream fout ("uva-01124.out");

    while(true) {
        fin >> noskipws >> a;
        if(fin.eof()) break;
        fout << a;
    }
}