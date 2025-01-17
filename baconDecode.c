#include <stdio.h>
#include "baconCode.h"
#include "string.h"

int main(int argc,char **argv) {
	/*
		Reads bacon encoded text from stdin, and decodes.
		One possible strategy:

			Keep track of a 5 bit number and the "current" bit position, starting at bit 4
			while(not at the end of file for stdin)
					get the next character from stdin
					if at end of file, break out of the loop
					if input is a blank, ignore it - just restart the loop
					if input is a newline, echo it to stdout and restart the loop
					if input is a vowel (from "vowels"), set the current bit to zero, and decrease the bit position
					if input is a consonant, set the current bit to one and decrease the bit position
					if all 5 bits have been filled:
						Use the 5 bit number as an index into alfa, and write the resulting character to stdout
						Reset the 5 bit number, and reset the current bit position to bit 4.
	*/

	// TODO: Your main code goes here
	char input;
	int fullBit = 0;
	int bitPos = 4;
	while((input = getchar())!= EOF){
		if(input == 10){
			putchar(input);
		}
		if(input == 32){
			continue; //ignore blanks (spaces)
		}
		if(strchr(vowels, input)){
			fullBit |= (0 << bitPos);
			bitPos--;
		}
		else if(strchr(consonants, input)){
			fullBit |= (1 << bitPos);
			bitPos--;
		}
		if(bitPos < 0){
			putchar(alfa[fullBit]);
			fullBit = 0;
			bitPos = 4;
		}
	}
	return 0;
}