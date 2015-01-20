#include "Headers.h"

class CSemaphore
{
private:
	int red, yellow, green;

public:
	CSemaphore();
	~CSemaphore();

	void GetStatus(int &colors);
	void SetStatus(int &colors);

	void SetR();
	void SetY();
	void SetG();

	void Output();
};