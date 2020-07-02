#include <iostream>
#include <string>
#include <fstream>
#include <algorithm>

using namespace std;

int main() {
    int n, b, h, w;
    int p, nb, minCost;

    ifstream fin ("uva-11559.in");
    ofstream fout ("uva-11559.out");

    while(true) {
        fin >> n >> b >> h >> w;
        if(fin.eof()) break;
        minCost = 2000000000;
        for(int i=0; i<h; i++) {
            fin >> p;
            for(int j=0; j<w; j++) {
                fin >> nb;
                if(nb >= n) {
                    minCost = min(minCost, n*p);
                    string s;
                    getline(fin, s);
                    break;
                }
            }
        }
        if(minCost != 2000000000 && minCost <= b) fout << minCost << "\n";
        else fout << "stay home\n";
    }
}