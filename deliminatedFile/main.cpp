//Abel Anand

#include <iostream>
#include <fstream>
using namespace std;
int main() {
    ifstream in;
    ofstream out("/Users/Abel/Desktop/Cpp/deliminatedFile/deliminatedFile/outDelim.txt");
    in.open("/Users/Abel/Desktop/Cpp/deliminatedFile/deliminatedFile/inDelim.txt");
    string temp;
    string name;
    char ch;
    int i;
    float f;
    
    if (!in.is_open()) {
        cout << "File not found\n";
    }
    
    while (getline(in, temp, ',')) {
        i = stoi(temp);
        f = stof(temp);
        getline(in, name, ',');
        ch = temp.at(0);
        getline(in, name);
        out << i << '\t' << name << '\t' << ch << '\n' ;
        cout << name << '\t' << ch << '\n' ;
    }
    in.close();
    out.close();
}
