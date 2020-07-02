#include <iostream>
#include <cstring>
#include <fstream>

using namespace std;

int main() {
    int tc;
    char s[2000];

    ifstream fin ("uva-00621.in");
    ofstream fout ("uva-00621.out");

    fin >> tc;
    for(int i=0; i<tc; i++) {
        fin >> s;
        int len = strlen(s);
        if(strcmp(s, "1") == 0 || strcmp(s, "4") == 0 || strcmp(s, "78") == 0) fout << "+\n";
        else if (s[len-1] == '5' && s[len-2] == '3') fout << "-\n";
        else if (s[0] == '9' && s[len-1] == '4') fout << "*\n";
        else if (s[0] == '1' && s[1] == '9' && s[2] == '0') fout << "?\n";
        else fout << "+\n";
    }

    return 0;
}