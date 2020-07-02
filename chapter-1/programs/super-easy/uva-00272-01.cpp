#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main () {
    char a;
    ifstream myfile ("uva-00272.in");
    ofstream fout ("uva-00272.out");
    bool openQuote = true;

    while(true) {
        myfile >> noskipws >> a;
        if(myfile.eof()) break;
        if(a == '"' && openQuote) {
            fout << "``";
            openQuote = false;
        } else if (a == '"') {
            fout << "''";
            openQuote = true;
        } else {
            fout << a;
        }

    }
    return 0;
}
