#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int isSymmetric(char *string) { // a function which returns 1 or 0 and takes a string as an input
	for (int c = 0; c < strlen(string)/2; c++) { // loop through have of the string size
	   if (string[c] != string[strlen(string)-1-c]) { // check if the reversed order is the same as the actual order
		   return 0; // if not, return 0
	   }
   }
	return 1; // or else, return 1
}

int main(int argc, char *argv[]) {
  char *a = argv[1]; // store the given argument
  if (isSymmetric(a)){ // if it is symmetric
	  exit(0); // exit with error code 0
  }
  exit(1); // or else exit with error code 1
}