#include "systemc.h"
SC_MODULE(gen)
{
	sc_in<bool> b;
	sc_port<sc_signal_inout_if<int>,2>d;
	void do_gen1();
	void do_gen2();
	SC_CTOR(gen)
	{
		SC_THREAD(do_gen1); // car c'est une tâche répétitive
		SC_METHOD(do_gen2);
		sensitive<<b.pos();
	}
};