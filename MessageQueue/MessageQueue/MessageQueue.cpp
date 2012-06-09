// MessageQueue.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "MessageQueue.h"


// This is an example of an exported variable
MESSAGEQUEUE_API int nMessageQueue=0;

// This is an example of an exported function.
MESSAGEQUEUE_API int fnMessageQueue(void)
{
	return 42;
}

// This is the constructor of a class that has been exported.
// see MessageQueue.h for the class definition
CMessageQueue::CMessageQueue()
{
	return;
}
