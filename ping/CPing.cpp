#include "pch.h"
#include "CPing.h"

using namespace ping;
using namespace Platform;

CPing::CPing()
{

	LPHOSTENT lpHost;
	UINT	  nLoop;
	int       nRet;
	struct    sockaddr_in saDest;
	struct    sockaddr_in saSrc;
	DWORD	  dwTimeSent;
	DWORD	  dwElapsed;
	u_char    cTTL;


	rawSocket = socket(AF_INET, SOCK_RAW, IPPROTO_ICMP);




}

CPing::~CPing() 
{
	closesocket(rawSocket);
}