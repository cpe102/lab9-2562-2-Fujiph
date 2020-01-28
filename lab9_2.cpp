#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main() {
    ifstream source;
    source.open ("cheerbook.txt");
    ofstream dest ("cheerbook_copy.txt");
    dest << "-------------------- SOTUS --------------------- \n";
    string textline;
    while(getline(source,textline)) {
        dest << textline << endl;
    }
    dest << "-------------------- SOTUS --------------------- ";
    source.close();
    dest.close();
}