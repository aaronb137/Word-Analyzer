//Created by: Aaron Bartee
//CS 202: Dr. Lancaster
//Date: 10-3-2021

#include "word_analyzer.h"

int countCharacters(string word)
{
	int i, characters;
	characters = 0;

	for(i = 0; i < word.size(); i++)
	{
		if(word[i] != '\'')
		{
			characters++;
		}
	}
	return characters;
}  


int countLettersInRange(string word, char lower, char upper)
{
	int charRange;
	int i;
	
	charRange = 0;

	for(i = 0; i < word.size(); i++)
	{
		if(word[i] >= lower && word[i] <= upper)
		{
			charRange++;
		}
	}
	return charRange;
}


int countUpperCaseLetters(string word) 
{
	int upperChar, i;
	upperChar = 0;

	for(i = 0; i < word.size(); i++)
	{
		if(word[i] >= 'A' && word[i] <= 'Z')
		{
			upperChar++;
		}
	}
	return upperChar;
} 


