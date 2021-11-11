#include <iostream>

using namespace std;
int main() {
	int counter, NumInputs;
	cout << "How many inputs will you have: "<< endl;
	cin >> NumInputs ;
	char Array[NumInputs];
	for (counter = 0; counter < NumInputs + 1; counter++){
		cout << "Insert a word: ";
		cin >> Array[counter];
		
	}
}