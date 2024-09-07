#include <iostream>
#include <cstdlib> 
#include <time.h> 

using namespace std;

int generateRandomInteger(int upperBound){
	srand(time(0));
	return rand()%upperBound;
}

int main(){
	
	int upperBound = 0;
	int count = 0;
	system("clear");
	cout << "\t============================================================" << "\n";
	cout << "\t+.+.+.+.+.+.+.+.+.+ NUMBER GUESSING GAME +.+.+.+.+.+.+.+.+.+" << "\n";
	cout << "\t============================================================" << "\n";
	
	while(upperBound <= 0){
		cout << "\n\tEnter an Upper Bound: ";
		cin >> upperBound;
		if(upperBound <= 0){
			cout << "\tEnter a valid number [ only positive numbers are allowed ]\n";
		}
	}
	
	int randomNumber = generateRandomInteger(upperBound);
	int x = -1;
	
	cout << "\n\tMake a Guess: ";
	cin >> x;
	count++;
	
	while(x != randomNumber){
		if(randomNumber > x){
			if(double(x)/double(randomNumber) < 0.7){
				cout << "\tToo Low! --- Try again!\n\t\t";
			}else{
				cout << "\tLow! --- Try again!\n\t\t";
			}
		}
		if(randomNumber < x){
			if(double(randomNumber)/double(x) < 0.7){
				cout << "\tToo High! --- Try again!\n\t\t";
			}else{
				cout << "\tHigh! --- Try again!\n\t\t";
			}
		}
		cin >> x;
		count++;
	}
	
	cout << "\t YOU WIN!\n";
	cout << "\tGuesses made [" << count << "]\n\n";
	
	return 0;
}
