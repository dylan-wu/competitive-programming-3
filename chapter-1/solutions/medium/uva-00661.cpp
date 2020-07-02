#include <fstream>

using namespace std;

int main() {
    int n, m, c, t, currentCost, eachCost[21], currentCheck, maxCost, onesOn;
    
    t = 1;

    ifstream fin ("uva-00661.in");
    ofstream fout ("uva-00661.out");

    while(fin >> n >> m >> c, n) {
        for(int i=0; i<n; i++) {
            fin >> eachCost[i];
        }

        currentCost = maxCost = onesOn = 0;

        while(m--) {
            fin >> currentCheck;
            if(maxCost <= c) {
                if(onesOn & (1 << currentCheck)) currentCost -= eachCost[currentCheck - 1];
                else {
                    currentCost += eachCost[currentCheck - 1];
                    if(currentCost > maxCost) maxCost = currentCost;
                }

                onesOn ^= (1 << currentCheck);
            }
        }

        fout << "Sequence " << t << "\n";

        if(maxCost > c) fout << "Fuse was blown.\n\n";
        else fout << "Fuse was not blown.\nMaximal power consumption was " << maxCost << " amperes.\n\n";

        ++t;
    }
}