#include<iostream>
#include<fstream>
#include<string>
#include<cmath>
using namespace std;

int main() {
    ifstream source;
    float sum ,y ;
    int count = 0;
    source.open ("score.txt");
    string textline;
    while(getline(source,textline)){
        sum += atof(textline.c_str());
        y += pow(atof(textline.c_str()),2);
        count++;
    }
    float mean = sum/count;
    float SD = sqrt(y/count-pow(mean,2));
    cout << "Number of data = " << count << endl ;
    cout << "Mean = " << mean <<endl ;
    cout << "Standard deviation = " << SD << endl;
    source.close();
}