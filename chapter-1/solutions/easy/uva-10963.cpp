#include <iostream>
#include <fstream>

using namespace std;

int main() {
    int tc, n, up, down;
    ifstream fin ("uva-10963.in");
    ofstream fout ("uva-10963.out");

    fin >> tc;

    for(int i=0; i<tc; i++) {
        fin >> n;

        bool yes = true;
        fin >> up >> down;
        int d = up - down;

        for(int j=0; j<n-1; j++) {
            fin >> up >> down;
            if(d != up - down) yes = false;
        }

        if(yes) fout << "yes\n";
        else fout << "no\n";
        if(tc) fout << "\n";
    }

    return 0;
}