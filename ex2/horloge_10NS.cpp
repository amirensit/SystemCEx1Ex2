#include "horloge_10NS.h"
void horloge::do_print()
{
	while (true)
	{
		state=!state;
		i.write(state);
		wait(10,SC_NS);
	}
}