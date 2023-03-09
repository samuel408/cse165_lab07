#include <iostream>

using namespace std;

void initialize_pint(int*& pointNum , int num ){
		pointNum = new int ;
		*pointNum = num;

}

int main( int argc, const char * argv[] )
{
	int num;
	cout << "Enter a number: ";
	cin >> num;

	int* pnum;
	initialize_pint(pnum, num);

	cout << *pnum << endl;

	return 0;
}