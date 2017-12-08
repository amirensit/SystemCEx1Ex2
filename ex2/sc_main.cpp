#include "aff.h"
#include "horloge_10NS.h"
#include "adder.h"
#include "gen.h"
int sc_main(int argc, char* argv[])
{
	aff afficheur("afficheur");
	adder adder("adder");
	gen gen("gen");
	horloge horloge("horloge");
	sc_signal<bool> signal1;
	sc_signal<int> signal2;
	sc_signal<int> signal3;
	sc_signal<int> signal4;


	horloge.i(signal1);
	gen.b(signal1);
	
	gen.d(signal2);
	gen.d(signal3);
	adder.a(signal2);
	adder.a(signal3);
	adder.s(signal4);
	afficheur.e(signal4);
	
	sc_start();
	return 0 ;

}