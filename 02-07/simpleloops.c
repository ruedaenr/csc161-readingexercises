// In simpleloops.c
// Compile with -std=c11 flag so that variable-initialization in loops works

#include <stdio.h>

 int main(void) {
  for (int i = 10; i>= 0; i--) {
    printf("%d\n", i);
  }
   for (int i = 0; i <= 10; i++) {
    printf("%d\n", i);
  }
  for (int i = 1; i <= 10; i++) {
    printf("%d\n", i);
  }
  for (int i = 10; i > 0; i--) {
    printf("%d\n", i);
  }
  for (int i = 10; i >= 0; i--) {
    printf("%d\n", i);
    } 

  return 0;
}

/* 1. For the loop to iterate 10 times you would have to initialize i=0 and test expression as i<10. 

2. In order to have the loop print numbers from 0 to 10 you would run a while loop while initilizing i = 0 and the test expression as i < 11.

3.To have the while loop print numbers from 10 to 0 you would intitialize i = 10 and the test expression as i >= 0, while decrementing i--. */
 
