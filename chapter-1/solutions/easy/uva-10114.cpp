#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

int main() {
    int loanDur, nRec;
    double downPayment, loan, decP[101];

    ifstream fin ("uva-10114.in");
    ofstream fout ("uva-10114.out");

    while(true) {
        fin >> loanDur >> downPayment >> loan >> nRec;
        if(loanDur < 0) break;
        int m;
        double p;
        for(int i=0; i<nRec; i++) {
            fin >> m >> p;
            for(int j=m; j<101; j++) decP[j] = p;
        }

        int now = 0;
        double monthlyPayment = loan / loanDur;
        double curVal = (loan + downPayment) * (1-decP[0]);
        double curLoan = loan;
        while(curVal < curLoan) {
            now++;
            curLoan -= monthlyPayment;
            curVal = curVal * (1-decP[now]);
        }

        fout << now << " month";
        if(now != 1) fout << "s";
        fout << "\n";
    }
    return 0;
}