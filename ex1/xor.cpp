#include "xor.h"
#include <iostream>;

using namespace std;
void xor::do_xor()
{
	bool tmp = ( a.read() && !b.read() ) || ( !a.read() && b.read() );
	cout<<tmp<<endl;
	s.write(  tmp  ) ;
}