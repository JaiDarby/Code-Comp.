#include <iostream>

using namespace std;
int sandwich(int,int,char);
int main() {
	int num1, num2;
	char function;
	cout << "Input the sandwich: ";
	cin >> num1 >> num2 >> function;
	cout << sandwich(num1, num2, function);
}
int sandwich(int num1, int num2, char function){
	int i, answer, Starter;
	Starter = num1 +1;
	answer = num1+1;
	 
	switch(function){
		case '+':
			for (i = num1 + 2 ; i < num2; i += 1){
				answer = answer + i;
			}
			return answer;
			break;
		case '-':
			for (i = num1 + 2; i < num2; i += 1){
				answer = answer - i;
			}
			return answer;
			break;
		case '*':
			for (i = num1 + 2; i < num2; i += 1){
				answer = answer * i;
			}
			return answer;
			break;

	}
}