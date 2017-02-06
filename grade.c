// In grade.c

/* By looking at the code, running it, and decomposing it in my head, the only that seems to cause any sort of issue in the code is since there is no boundaries for the conditionals the code will execute through all the way to last conditional. Since you can put in any number that is above 60 the answer would almost always be a D because it is the last conditional so it will execute it since it is being satisfied.
 
#include <stdio.h>

int main(void) {
  int grade = 70 ;
  char letter = 'f';    /* by default... */

  if (grade >= 90 &  grade < 100) {
    letter = 'a';
  }
  if (grade >= 80 &  grade < 90) {
    letter = 'b';
  }
  if (grade >= 70 &  grade < 80) {
    letter = 'c';
  }
  if (grade >= 60 &  grade < 70) {
    letter = 'd';
  }
  printf("%c\n", letter);
  return 0;
}
