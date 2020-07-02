#include <stdio.h>
#include <fstream>

using namespace std;

int main() {
	int t, n, Case = 0;
    ifstream fin("uva-11799.in");
    ofstream fout ("uva-11799.out");
    fin >> t;
	while(t--) {
		fin >> n;
		int max = 0, c;
		while(n--) {
			fin >> c;
			if(max < c)
				max = c;
		}
        fout << "Case " << ++Case << ": " << max << "\n";
	}
    return 0;
}