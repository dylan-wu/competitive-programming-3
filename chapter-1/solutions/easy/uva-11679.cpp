#include <iostream>
#include <fstream>

using namespace std;

int main() {
    int bankMoney[22];
    int banks, debentures, value;
    int debtor, creditor, money;
    int flag;

    ifstream fin ("uva-11679.in");
    ofstream fout ("uva-11679.out");

    while(true) {
        if(fin.eof()) break;
        if(!banks && !debentures) break;
        flag = 1;
        for(int i=0; i<banks; i++) fin >> bankMoney[i];
        for(int i=1; i<=debentures; i++) {
            fin >> debtor >> creditor >> money;
            bankMoney[creditor-1] += money;
            bankMoney[debtor-1] -= money;
        }
        for(int i=0; i<banks; i++) {
            if(bankMoney[i] < 0) {
                flag = 0;
                break;
            }
        }
        if(flag) fout << "S\n";
        else fout << "N\n";
    }
    return 0;
}