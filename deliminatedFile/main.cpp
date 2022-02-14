//Abel Anand

#include <iostream>
#include <fstream>
using namespace std;
int main() {
    ifstream in;
    ofstream out("outDelim.txt");
    in.open("inDelim.txt");
    string temp = "\t";
    
    if (!!in.is_open()) {
        cout << "File not found\n";
    }
    
    while (getline(in, temp, ',')) {
        
    }
}
