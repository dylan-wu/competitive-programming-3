#include <fstream>
#include <iostream>

using namespace std;

int main() {
    char c = ' ';
    int n;

    ifstream fin ("uva-11332.in");
    ofstream fout ("uva-11332.out");

    while(true) {
        n = 0;
        while(true) {
            fin >> c;
            if(c == '\n') break;
            n += c - '0';
        }
        if(n==0) return 0;
        while(n>9) n = (n%10) + (n/10);
        fout << n << "\n";
        break;
    }
}