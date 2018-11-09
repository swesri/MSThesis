/*
	Desc: A class to unify memory allocation functions.

	Author: Hamid Reza Chitsaz
		Postdoctoral Fellow, 
		SFU, Computational Biology Lab

	Last Update: Dec 1, 2008
*/

#ifdef HAVE_CONFIG_H
# include "config.h"
#endif

#include <stdio.h>
# include <stdlib.h>
#include "alloc.h"

void* Alloc::xcalloc(unsigned long m, unsigned long n)
{
  void* ptr;

  if(m == 0 || n == 0)
    return NULL;

  if (!(ptr = calloc(m, n)))
    {
      fputs("Error in calloc()\n", stderr);
      exit(EXIT_FAILURE);
    }

  return ptr;
}

void* Alloc::xmalloc(unsigned long n)
{
  void* ptr;

  if (!(ptr = malloc(n)))
    {
      fputs("Error in malloc()\n", stderr);
      exit(EXIT_FAILURE);
    }

  return ptr;
}

void* Alloc::xrealloc(void* ptr, unsigned long n)
{
  if (!(ptr = realloc(ptr, n)))
    {
      fputs("Error in realloc()\n", stderr);
      exit(EXIT_FAILURE);
    }

  return ptr;
}
