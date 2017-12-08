#include "systemc.h"
SC_MODULE(gen)
{
	sc_out<bool> s ;
	void do_gen();
	SC_CTOR(gen)
	{
		SC_THREAD( do_gen );
	}
};