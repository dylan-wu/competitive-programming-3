#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    char a;
    ifstream fin ("uva-00272.in");
    ofstream fout ("uva-00272.out");
    bool open = true;

    while(true) {
        fin >> noskipws >> a;
        if(fin.eof()) break;
        if(a == '"') {
            if(open) {
                fout << "``";
                open = false;
            } else {
                fout << "''";
                open = true;
            }
        } else {
            fout << a;
        }
    }
    return 0;
}