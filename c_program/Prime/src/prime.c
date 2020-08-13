#include "prime.h"

int prime(int number)
{
  int iter;

  /* Return -1 for neither prime nor composite numbers and also for negative numbers*/
  if(number <= 1)
    return -1;
  /* Return 1 for prime number 0 for Composite number */
  
  for(iter = 2; iter <= (number/2); iter++)
  {
    if(number%iter == 0)
      return 0;
  }

  return 1;
}
