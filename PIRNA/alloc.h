/*
	Desc: A class to unify memory allocation functions.

	Author: Hamid Reza Chitsaz
		Postdoctoral Fellow, 
		SFU, Computational Biology Lab
*/

#ifndef ALLOC_H
#define ALLOC_H

class Alloc {
public:
	void* xcalloc(unsigned long, unsigned long);
	void* xmalloc(unsigned long);
	void* xrealloc(void*, unsigned long);
};

#endif
