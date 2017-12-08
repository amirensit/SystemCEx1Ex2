#include "systemc.h"
#include "xor.h"
#include "aff.h"
#include "gen.h"
int sc_main(int argc,char* argv[])
{
	gen g1("gen1");
	gen g2("gen2");
	xor x("xor");
	aff f("afficheur");
	sc_signal<bool> in1;
	sc_signal<bool> in2;
	sc_signal<bool> out;
	g1.s(in1);
	g2.s(in2);
	x.a(in1);
	x.b(in2);
	x.s(out);
	f.e(out);
	sc_start(200,SC_NS);
	return 0;

}