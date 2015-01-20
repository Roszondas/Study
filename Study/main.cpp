#include <cstdio>
#include <conio.h>

#include "Semaphore.h"

int main()
{
	int col_in[4], col_out[4];
	CSemaphore *Signal1 = new CSemaphore();

	col_in[0] = 1;
	col_in[1] = 0;
	col_in[2] = 0;

	Signal1->SetStatus(*col_in);

	Signal1->GetStatus(*col_out);

	printf("Semaphore signals are:\nRed - %i\nYellow - %i\nGreen - %i\n", col_out[0], col_out[1], col_out[2]);

	_getch();
	return 0;
}
