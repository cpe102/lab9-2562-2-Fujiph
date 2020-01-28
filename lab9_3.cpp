#include<iostream>
#include<fstream>
#include<string>
#include<cmath>
using namespace std;

int main() {
    ifstream source;
    float sum ;
    int count = 0;
    source.open ("score.txt");
    string textline;
    while(getline(source,textline)){
        sum += atof(textline.c_str());
        count++;
    }
    float mean = sum/count;
    float SD = sqrt(pow(sum - mean,2)/count);
    cout << "Number of data = " << count << endl ;
    cout << "Mean = " << mean <<endl ;
    cout << "Standard deviation = " << SD << endl;
    source.close();
}
//cout << "Number of data = ";
//cout << "Mean = ";
//cout << "Standard deviation = ";
