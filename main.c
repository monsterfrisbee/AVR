/*
 ELE542 
 Jonathan Lapointe LAPJ05108303
 Charles Trépanier 

*/


#include "hardware.h"
#include "dbgCmd.h"
#include "cmdParser.h"



int main( void )
{

	hdInit();
	dbgSendRobotString("Reset");

	while(1)
	{
		cPMainCmdParser();
	}


}
