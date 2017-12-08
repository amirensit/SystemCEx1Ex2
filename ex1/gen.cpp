#include "gen.h"
void gen::do_gen()
{
	bool tmp;
	while (true)
	{
		tmp=(bool)( rand() % 2 );
		s.write(tmp);
		wait(10,SC_NS);
	}
}