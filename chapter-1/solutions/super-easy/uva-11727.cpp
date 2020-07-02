#include <iostream>
#include <fstream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int n, cnt, a[3];
    ifstream fin ("uva-11727.in");
    ofstream fout ("uva-11727.out");

    fin >> n;
    cnt = 0;
    for(int i=0;i<n;i++) {
        cnt++;
        fout << "Case " << cnt << ": ";

        fin >> a[0] >> a[1] >> a[2];
        vector<int> v(a,a+3);

        sort(v.begin(),v.end());

        fout << v[1] << "\n";
    }
    return 0;
}