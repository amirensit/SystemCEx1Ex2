#include "gen.h"
void gen::do_gen1()
{
	int tmp=rand() % 16;
	d[0]->write(tmp);
	wait(10,SC_NS);

}
void gen::do_gen2()
{
	int tmp=rand() % 16;
	d[1]->write(tmp);
}