#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "baconCode.h"

int main(int argc, char **argv) {
	/*
		Read from stdin, and convert each character to a 5 letter modified "Bacon" code.

		While(not end of file for stdin)
			Read the next character from standard input.
			If there are no more characters, quit the loop.
			If the character is a new-line('\n') copy it to stdout and restart the loop
			Find the index of each (lowercased) character in "alfa" ... if not found, use the index of '*'.
			Treat the index as a five bit binary number
			Loop through the five bits in the binary number, from left to right
				A binary digit of "0" in the index causes a vowel randomly chosen from "vowels" to be written to stdout
				A binary digit of "1" in the index causes a consonant randomly chosen from "consonants" to be written to stdout
				Spaces are injected in stdout randomly between 1 to 8 character chunks
	*/
	srand(time(0)); // Use the current time as the seed for random generator

	// TODO: Your encode code goes here...

	return 0;
}
