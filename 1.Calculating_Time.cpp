#include <ctime>
using namespace std;
int main()
{
	clock_t start,end;
	start = clock();
	/*
		Run code here
	*/
	end=clock();
	printf("Parsern Time: %f seconds\n", (double)(end-start)/CLOCKS_PER_SEC);
}
