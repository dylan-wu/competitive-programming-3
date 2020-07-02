#include <iostream>
#include <fstream>

using namespace std;

int main() {
    char a;
    ifstream fin ("uva-00272.in");
    ofstream fout ("uva-00272.out");

    bool openQuote = true;

    while(true) {
        fin >> noskipws >> a;
        if(fin.eof()) break;
        if(a == '"') {
            if(openQuote) {
                fout << "``";
                openQuote = false;
            } else {
                fout << "''";
                openQuote = true;
            }
        } else {
            fout << a;
        }
    }
}