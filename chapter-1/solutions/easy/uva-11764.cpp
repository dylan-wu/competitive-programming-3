#include <fstream>
#include <iostream>
using namespace std;

int main () {
    int num, a, b, c, d, e, count=1;
    ifstream fin ("uva-11764.in");
    ofstream fout ("uva-11764.out");

    fin >> num;

    for(int i=0; i<num; i++) {
        fin >> a >> b;
        c=d=0;
        for(int i=0; i<a-1; i++) {
            fin >> d;
            if(d>b) c++;
            if(d<b) d++;
            b = d;
        }

        fout << "Case " << count++ << ": " << c << " " << d << "\n";
    }
    return 0;
}