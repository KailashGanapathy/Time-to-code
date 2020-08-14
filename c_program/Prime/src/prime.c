/// @file prime.c

#include "prime.h"

/**
* This function used to check whether the input number is a Prime number
* @param[in] number the input number need to check the condition
* @note Return 1 (Number is a prime number)
* @note Return 0 (Number is a composite number)
* @note Return -1 (Number is a negative or neither prime nor composite)
*/

int prime(int number)
{
  int iter;

  /* Return -1 for neither prime nor composite numbers and also for negative numbers*/
  if(number <= 1)
    return -1;
  /* Return 1 for prime number 0 for Composite number */
  
  /**
  * A Number will have atleat 2 factors if it divisible by any natural number ranges [1 - Number]
  * The loop start from 2 to half of the number
  * if it is a composite it immediately return 0
  */
  
  for(iter = 2; iter <= (number/2); iter++)
  {
    if(number%iter == 0)
      return 0;
  }

  return 1;
}
