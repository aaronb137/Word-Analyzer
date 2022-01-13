//Created by: Aaron Bartee
//CS 202: Dr. Lancaster
//Date: 10-3-2021

#include "word_analyzer.h"

int getWords(int size, string stringArray[], string filename)
{
	ifstream file(filename);
	int i = 0;

	string word;

	if(!file.is_open()) 
	{ 
		exit(-1);
	}

	while(file >> word) 
	{
		stringArray[i] = word;
		i++;
	}
	
	return i;
}

string findLongestWord(int size, string stringArray) 
{
	string validString = "";
	string longestWord = "";

	for(int i = 0; i < stringArray.size(); i++) 
	{
		if (stringArray[i] != ' ')
		{
			validString += stringArray[i];
		}
		else
		{
			validString = "";
		}

		if (validString.size() > longestWord.size())
		{
			longestWord = validString;
		}
	}
}

int main(int argc, char** argv)
{
	if(argc < 2)
	{
		cout << "Correct usage:" << endl << "./text_analyzer poem.txt" << endl;
		return -1;
	}

	int i = 0, size = 100, sumChar = 0, sumUpper = 0, sumBounds = 0;
	string stringArray[size];
	string longestWord;

	int wordAmnt = getWords(size, stringArray, argv[1]);

	if(wordAmnt == -1)
	{
		cout << "File couldn't be opened.." << endl;
		return -1;
	}

	for(string word : stringArray)
	{
		sumChar += countCharacters(word);
		sumUpper += countUpperCaseLetters(word);
		sumBounds += countLettersInRange(word, 'c', 'g');
		longestWord = findLongestWord(size, word);
	}
	cout << "There are "<< sumChar << " characters in your file." << endl;
	cout << "There are " << sumUpper << " upper case letters in your file." << endl;
	cout << "There are " << sumBounds << " letters between 'c' and 'g'." << endl;
	cout << "The longest word in this file is " << "\"" << longestWord << "\"." << endl;

	return 0;
}


