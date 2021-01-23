#include <stdio.h>
#include <stdlib.h>

int main()
{
  printf("Hello World!\n");
  printf("C is pretty badass\n");

  // placeholders:
  // %d - integer
  // %ld - large integer
  // %f - float
  // %lf - large float
  // %c - char (uses single quotes)
  // %s - string
  printf("%d\n", 32);
  printf("%ld\n", 33535);
  printf("%f\n", 23.5);
  printf("%lf\n", 23423.53423);
  printf("%c\n", 'a');
  printf("%s\n", "Hello Again");

  // A string is an array of chars?
  char characterName[] = "John";
  int characterAge = 22;

  printf("%s is %d years old\n", characterName, characterAge);
  return 0;
}

// compile with: shift + ctrl + B
// run with: ./main.exe