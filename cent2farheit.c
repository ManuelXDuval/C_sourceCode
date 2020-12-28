/******************************************************************************
* cent2farheit -- temperature unit converter					                        *
*										                                                          *	
* Author: MxD									                                                *
*										                                                          *
* Date: 12/27/2020					                                                  *
*										                                                          *
* Pupose: convert Centigrad to Fahrenheit unit					                      *
*										                                                          *
* Usage: invoke the program and enter a numeric value			                    *
*  										                                                        *
******************************************************************************/
#include <stdio.h>
#include <string.h>

char centigrade[100]; /* input temperature in Centrigrade unit */
int fahrenheit; /* temperature expressed in Fahrenheit unit */

int main()
{
  printf("Enter temperature in Centigrade unit: ");
  /* getting centrigrade value from the stdin */
  fgets(centigrade, sizeof(centigrade), stdin);
  
  /* getting the integer value from the input string using the sscanf function */
  sscanf(centigrade, "%d", &fahrenheit);
  
  /* assigning the farenheit value */
  fahrenheit = 9/5 * fahrenheit + 32;
  
  /* removing the trailing end of line character from the centigrade variable */
  centigrade[strlen(centigrade) -1] = '\0';
  
  printf("Temperature in Centigrade unit:\t%s\tTemperature in Fahrenheit unit: %d\t\n", centigrade, fahrenheit);

  return (0);
}
