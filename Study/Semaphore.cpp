#include "Semaphore.h"

CSemaphore::CSemaphore()
{
	red = 0;
	yellow = 0;
	green = 0;
};

void CSemaphore::SetStatus(int &colors)
{
	int *in = &colors;

	red = in[0];
	yellow = in[1];
	green = in[2];
};

void CSemaphore::GetStatus(int &colors)
{
	int *out = &colors;

	out[0] = red;
	out[1] = yellow;
	out[2] = green;
};
