//inputs: char example[]
//output: char example or char sentence[] after reverseSentenceCharacters function called
//program takes in a sentence and reverses th string character order

#include "stdafx.h"
#include<iostream>
using namespace std;

void reverseSentenceCharacters(char* sentence); // reverses the string character order

int _tmain(int argc, _TCHAR* argv[])
{
	char example[200]= "";// creates an empty char array that is a C string since unfilled spots are filled with '\0'

	cout << "Enter a string: "; // asks user for a string
	cin.getline(example,199); // gets the string entered by the user

	reverseSentenceCharacters(example);// calls function that reverse sentence's characters
	
	cout << "The reversed string is: " << example << endl;// outputs reversed string
	return 0;
}


void reverseSentenceCharacters(char sentence [])// reverse characters in a sentence
{
	char* front, *rear; // pointers that aid in the starting points
	int size; // for sentence lenth
	char fixed; // stores character temporarly for the switch

	size = strlen(sentence); // gets length of C string

	front = sentence; // starts at front of the sentence
	rear = &sentence[size - 1]; // starts at end of sentence

	while (front < rear) // loop made go throught whole input
	{
		// sets variables equal to one another for the switch
		fixed = *front;
		*front = *rear;
		*rear = fixed;
		
		front++; // moves character target foward for front for switch
		rear--; // moves character target backward for rear for switch
	}
	return;
}

