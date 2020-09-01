//Author: Liam Sullivan mls6888@psu.edu
//Collaborator: Olivia Mandola
//Collaborator: Tyler Holman

#include <stdio.h>
#include <stdlib.h>
#include <readline/readline.h>

int main(void) {

  double cel, fah;
  char* temp = readline("Enter tempurature in celisius:");
  cel = atof(temp);
  fah = ((cel * 1.8) + 32);
  printf("%f° in Celsius is equivalent to %f° Fahrenheit.\n", cel, fah);


  return 0;
}