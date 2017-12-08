#include "systemc.h"
SC_MODULE(aff)
{
	sc_in<bool> e;
	void do_print();
	SC_CTOR(aff)
	{
		SC_METHOD(do_print);
		sensitive<<e;
	}
};