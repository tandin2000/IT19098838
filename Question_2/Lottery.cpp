/*
----------------------------
Wangchen.T
IT19098838
----------------------------
*/
#include "Lottery.h"
#include <iostream>
#include <cstdlib>										//library of rand operator
#include <time.h>
using namespace std;

Lottery::Lottery(){
	int SIZE = 0;
	srand(time(0));										// genarates different numbers each time.
	while (SIZE < 5){
		lotteryNumbers[SIZE] = rand() % 10;				//%10 for displaying numbers from 0-9 rather then 0-1
		SIZE++;
	}
 
	for (int Y = 0; Y < 5; Y++){						//making a comparison array for later on valadating
		lotteryNumbersComparson[Y] = -99;
	}

}
void Lottery::uNumbers(){
	int Uinput;											// store the user input
	cout << "===========================================" << endl;			//to show first line of execution
	cout << "===========================================" << endl;
	for (int SIZE = 0; SIZE < 5; SIZE++){
		cout << "Enter Number " << SIZE + 1 << " : ";
		cin >> Uinput;
		lotteryNumbersUser[SIZE] = Uinput;
	}

	cout << endl;

	//comparing the numbers from both arrays 
	
	int TMP1 = 0;										//Tempory store the array controling variable
	int TMP2 = 0;										//To detect whether there's equal numbers in Users array
	int TMP3[5], K=0;
	for (int i = 0; i < 5; i++){
		if (lotteryNumbersUser[i] == lotteryNumbers[i]){
			lotteryNumbersComparson[TMP1] = i;			//To store the index of matching numbers
			TMP1++;										
			TMP2 = 1;									//TO check wheather there is matching or not!
			TMP3[K] = lotteryNumbers[K];				//To store the values of the matching numbers
			K++;
		}
	}
 
	if (TMP2 == 1){											//Printing the values that are equal
		cout << "Followings are the matching values" << endl;
		cout << endl;
		for (int j = 0; j < 5; j++){
			if (lotteryNumbersComparson[j] > -1){
				cout << j + 1 << " Index value of the number is: " << lotteryNumbersComparson[j] + 1 <<" and the value of this index-->>" <<TMP3[j]   <<endl;
			}
		}
	}else{
		cout << "There's no equal values in your lottary" << endl;
	}
	cout << endl;
}

void Lottery::pArrays(){
	cout << "Winning lottery values" << endl;				//Printing the computer generated values
	for (int i = 0; i < 5; i++){
		cout << lotteryNumbers[i];
		if (i == 4){
			break;
		}
		cout << " , ";
	}

	cout << endl;

	cout << "Your lottery values" << endl;					//printing the user entered values
	for (int j = 0; j < 5; j++){
		cout << lotteryNumbersUser[j];
		if (j == 4){
			break;
		}
		cout << " , ";
	}
	cout << endl;
	cout << "===========================================" << endl;			//to show end line of execution
	cout << "===========================================" << endl;
}


