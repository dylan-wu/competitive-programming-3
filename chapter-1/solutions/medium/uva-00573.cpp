#include <fstream>
using namespace std;

int main() {
    int h, u, d, f;

    ifstream fin ("uva-00573.in");
    ofstream fout ("uva-00573.out");

    while(fin >> h >> u >> d >> f, h || u || d || f) {
        double currU = u;
        double distMin = u*(f/100.0);
        double currH = 0;
        int currDay = 0;

        do {
            currDay++;
            currH += currU;
            if(currH > h) {
                fout << "success on day ";
                break;
            }
            currH -= d;
            if(currH < 0) {
                fout << "failure on day ";
                break;
            }
            currU -= distMin;
            if(currU < 0) currU = 0;
        } while(true);

        fout << currDay << "\n";
    }

    return 0;
}