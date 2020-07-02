#include <iostream>
#include <fstream>

using namespace std;

int main() {
    int n, px, py, x, y;
    ifstream fin ("uva-11498.in");
    ofstream fout ("uva-11498.out");

    fin >> n;
    while(n != 0) {
        fin >> px >> py;
        for(int i=0; i<n; i++) {
            fin >> x >> y;

            if(x == px || y == py)
                fout << "divisa";
            else if (x < px && y > py)
                fout << "NO";
            else if (x > px && y > py)
                fout << "NE";
            else if (x > px && y < py)
                fout << "SE";
            else if (x < px && y < py)
                fout << "SO";
            fout << "\n";
        }
        fin >> n;
    }
    return 0;
}