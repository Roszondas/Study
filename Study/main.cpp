#include "Headers.h"
#include "Semaphore.h"

int main()
{
	int col_in[3];
	CSemaphore *Signal1 = new CSemaphore();

	printf("Start working.\n");
	Signal1->Output();

	printf("Set red light. Checking...\n");
	Signal1->SetR();
	Signal1->Output();

	printf("Set yellow light. Checking...\n");
	Signal1->SetY();
	Signal1->Output();

	printf("Set green light. Checking...\n");
	Signal1->SetG();
	Signal1->Output();

	printf("Overloading semaphore. Checking...\n");
	col_in[0] = 1;
	col_in[1] = 1;
	col_in[2] = 1;
	Signal1->SetStatus(*col_in);
	Signal1->Output();

	printf("Checking done.\n");
	return 0;
}
