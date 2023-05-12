#include <iostream>
#include <string>	//for using string data type and its functions
#include <cstdio>	//for using getline function
#include <ctype.h >	//for using isalpha, isdigit function
using namespace std;

int main(){
	string str;	//inputting the string and setting all the
	int words = 0, ch = 0, dig = 0, alph = 0, vow = 0, cons = 0;	// parameters as zero
	cout << "Enter a string\n";
	getline(cin, str);
	ch = str.length();	//setting number of characters equal to the	//string length

	for (int i = 0; i <= str.length(); ++i)	//accessing the string character by character
	{
		if (isalpha(str[i]))	//checking for alphabets
		{ ++alph;
			if (str[i] == 'A' || str[i] == 'a' || str[i] == 'E' || str[i] == 'e' || str[i] == 'I' || str[i] == 'i' || str[i] == 'O' || str[i] == 'o' || str[i] == 'U' || str[i] == 'u')	//checking for vowels
				++vow;
			else
				++cons;	//if not vowel then it must be a consonant
		}
		else if (isdigit(str[i]))	//checking for digits
			++dig;
		if (str[i] == ' ' || str[i] == '\0')	//counting the umber of words
			++words;
	}

	cout << "Number of words=" << words << "\n";
	cout << "Number of alphabets=" << alph << "\n";
	cout << "Number of vowels=" << vow << "\n";
	cout << "Number of consonants=" << cons << "\n";
	cout << "Number of digits=" << dig << "\n";
	cout << "Number of characters=" << ch << "\n";
	return 0;
}
