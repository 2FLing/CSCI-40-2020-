#include "counter.h"

// FIXME: implement all the functions (i.e., "methods") in counter.h 
void Counter_construct(Counter* self,int startingValue)
{
	self->count = startingValue;
}
void Counter_inc(Counter* self)
{
	self->count++;
}
void Counter_reset(Counter* self, int startingValue)
{
	self->count = startingValue;
}
int Counter_getCount(const Counter* self)
{
	return self->count;
}