#include<iostream>
using namespace std;

int main(){
	int count[6] = {}; //Declare array count for counting A,B,C,D,F and initialize all element = 0
	string grade;
	cout << "Please input grade of each student (A-F) or input 0 to exit." << endl;
	do{
		cout << "Student [" << count[5] +1 << "]:";
		cin >> grade; //The loop must be terminated when grade = '0'
		if( grade == "A" ) {
			count[0] ++;
			count[5]++;
		}else if( grade == "B" ) { 
			count[1]++;
			count[5]++;
		}else if( grade == "C" ) {
			count[2]++;
			count[5]++;
		}else if( grade == "D" ) {
			count[3]++;
			count[5]++;
		}else if( grade == "E" ) {
			count[4]++;
			count[5]++;
		}else{
			cout << "Wrong input. Please input again.";
		} 
	}while( grade != "0");
	
	
	cout << "In total" << count[5] << "students.";
	cout << "A = " << count[0] <<",";
	cout << "B = " << count[1] <<",";	
	cout << "C = " << count[2] <<",";
	cout << "D = " << count[3] <<",";
	cout << "F = " << count[4] <<",";	
		return 0;
	}