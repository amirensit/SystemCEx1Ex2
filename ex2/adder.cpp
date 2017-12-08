#include "adder.h"
void adder::do_add()
{
	int tmp;
	tmp=a[0]->read()+a[1]->read();
	s.write(tmp);
}