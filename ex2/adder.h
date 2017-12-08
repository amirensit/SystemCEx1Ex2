#include "systemc.h"
SC_MODULE(adder)
{
	sc_out<int>s;
	sc_port<sc_signal_in_if<int>,2> a ;
	void do_add();
	SC_CTOR(adder)
	{
		SC_METHOD(do_add);
		sensitive<<a;
	}
};