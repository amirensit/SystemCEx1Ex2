#include "systemc.h"
SC_MODULE(horloge)
{
	bool state;
	sc_out<bool> i;
	horloge()
	{
		state=false;
	}
	void do_print();
	SC_CTOR(horloge)
	{
		SC_THREAD(do_print);

	}


};