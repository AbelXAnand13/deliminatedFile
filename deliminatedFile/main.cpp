//Abel Anand

#include <iostream>
#include <fstream>
using namespace std;
int main() {
    ifstream in;
    ofstream out("outDelim.txt");
    in.open("inDelim.txt");
    string temp;
    string name;
    char ch;
    int i;
    
    if (!!in.is_open()) {
        cout << "File not found\n";
    }
    
    while (getline(in, temp, ',')) {
        getline(in, temp, ',');
        ch = temp.at(0);
        getline(in, temp);
        i = stoi(temp);
        out << name << '\t' << ch << '\t' << i << '\n';
    }
    in.close();
    out.close();
}
