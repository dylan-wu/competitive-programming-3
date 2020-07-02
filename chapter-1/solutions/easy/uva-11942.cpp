#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream fin ("uva-11942.in");
    ofstream fout ("uva-11942.out");

    int n, a[10];
    
    fin >> n;
    fout << "Lumberjacks:\n";

    for(int i=0; i<n; i++) {
        for(int j=0; j<10; j++) {
            fin >> a[j];
        }
        if(a[0] < a[1] && a[1] < a[2] && a[2] < a[3] && a[3] < a[4] && a[4] < a[5] && a[5] < a[6] && a[6] < a[7] && a[7] < a[8] && a[8] < a[9]) {
            fout << "Ordered\n";
        } else if(a[0] > a[1] && a[1] > a[2] && a[2] > a[3] && a[3] > a[4] && a[4] > a[5] && a[5] > a[6] && a[6] > a[7] && a[7] > a[8] && a[8] > a[9]) {
            fout << "Ordered\n";
        } else {
            fout << "Unordered\n";
        }
    }

    return 0;
}