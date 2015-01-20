class CSemaphore
{
private:
	int red, yellow, green;

public:
	CSemaphore();
	~CSemaphore();

	void GetStatus(int &colors);
	void SetStatus(int &colors);
};