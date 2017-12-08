#include "systemc.h"
SC_MODULE(xor)
{
	sc_in<bool>a,b;
	sc_out<bool>s;
	void do_xor();
	SC_CTOR(xor)
	{
		SC_METHOD(do_xor);
		sensitive<<a<<b;
	}
};
