#include <stdio.h>
#include <stdlib.h>
#include <readline/readline.h>
//Author: Liam Sullivan mls6888@psu.edu
//Collaborator: Olivia Mandola ovm5126@psu.edu
//Collaborator: Tyler Holman   trh5481@psu.edu

int main(void) {

  double cel, fah;
char* temp = readline("Enter tempurature in celisius: " );
cel = atof(temp);
fah = ((cel * 1.8) + 32);
printf("%f° in Celsius is equivalent to %f° Fahrenheit.\n", cel, fah);


  return 0;
}