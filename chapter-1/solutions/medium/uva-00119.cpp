#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

int main(){

    ifstream fin ("uva-00119.in");
    ofstream fout ("uva-00119.out");
    int n, cant, amigos;
    
    string s1,s2;
    
    vector<string> v;
    
    fin >> n;
    
    while(true){
        map<string, int> M;
        
        v.clear();
        
        for(int i=0;i<n;i++){
            fin >> s1;
            v.push_back(s1);
        }
        
        
        for(int i=0;i<n;i++){
            fin >> s1 >> cant >> amigos;
            
            
            if(amigos != 0) M[s1]-=amigos*(cant/amigos);
            
            for(int j=0;j<amigos;j++){
                fin>>s2;
                M[s2]+=cant/amigos;
            }
        }
        
        for(int i=0;i<n;i++)
            fout<<v[i]<<" "<<M[v[i]]<<endl;
        
        if(fin>>n) fout<<endl;
        else break;
    }
}