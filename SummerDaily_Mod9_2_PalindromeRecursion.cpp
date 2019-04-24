// SummerDaily_Mod9_1_RecursionStars.cpp : This file contains the 'main' function. Program execution begins and ends there.
// 04/07/19
// Use recursion to check if an entered word is a palindrome

#include "pch.h"
#include <iostream>
#include <string>

void ifPalindrome(std::string w, int first, int last) {
	if (first == last) { //If only 1 letter is entered, the indices for first and last will be the same. And it's also a palindrome.
		std::cout << "Palindrome";
		return;
	}
	if (w[first] != w[last]) { //If the first and last letters don't match, it's not a palindrome.
		std::cout << "Not Palindrome";
		return;
	}
	else {
		ifPalindrome(w, first + 1, last - 1);
	}
}

int main()
{
	std::string word;
	std::cout << "Enter a word: ";
	std::cin >> word;
	int first = 0;
	int last = word.length()-1;
	ifPalindrome(word, first, last);

	return 0;
}