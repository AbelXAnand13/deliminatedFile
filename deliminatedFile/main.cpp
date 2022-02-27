//Abel Anand

#include <iostream>
#include <fstream>
using namespace std;
int main() {
    ifstream in;
    ofstream out("/Users/Abel/Desktop/Cpp/deliminatedFile/deliminatedFile/outDelim.txt");
    in.open("/Users/Abel/Desktop/Cpp/deliminatedFile/deliminatedFile/inDelim.txt");
    string temp;
    string txt;
    char ch;
    int i;
    float f;
    
    if (!in.is_open()) {
        cout << "File not found\n";
    }
    
    while (getline(in, temp, ',')) {
        i = stoi(temp);
        getline(in, temp, ',');
        f = stof(temp);
        getline(in, txt, ',');
        getline(in, temp);
        ch = temp.at(0);
        out << i << "\t" << f << "\t" << txt << "\t" << ch << endl;
        cout << i << "\t" << f << "\t" << txt << "\t" << ch << endl;
    }
    in.close();
    out.close();
}
