#include <cstdio>
#include <cstring>
#include <fstream>
#include <iostream>

using namespace std;

int main() {
    int r, n;
    string x;
    int count = 0;

    ifstream fin ("uva-10141.in");
    ofstream fout ("uva-10141.out");

    while(fin >> r >> n, r || n) {
        count++;
        double price = 2000000000, p;
        int reqMet = -1, rm;
        string name, nam;

        for(int i=0; i<r; i++) {
            fin.ignore();
            getline(fin, x);
        }

        while(n--) {
            getline(fin, nam);
            fin >> p >> rm;
            if(rm > reqMet) {
                reqMet = rm;
                name = nam;
                price = p;
            } else if (rm == reqMet && p < price) {
                reqMet = rm;
                name = nam;
                price = p;
            }

            for(int i = 0; i < rm; i++) {
                getline(fin, x);
            }
        }
        if(count > 1) fout << "\n";
        fout << "RFP #" << count << "\n";
        fout << name << "\n";
    }

    return 0;
}