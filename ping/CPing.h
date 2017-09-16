#pragma once

namespace ping
{
    public ref class CPing sealed
    {
		SOCKET	  rawSocket;
    public:
        CPing();
		virtual ~CPing();
    };
}
