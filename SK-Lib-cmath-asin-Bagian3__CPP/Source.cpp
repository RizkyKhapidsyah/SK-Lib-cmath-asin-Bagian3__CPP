#include <iostream>
#include <cmath>
#include <conio.h>

/*		Source by Programiz
*		Modified for Learn by Rizky Khapidsyah
*		I.D.E : VS2019
*/

#define PI 3.141592654

using namespace std;

int main() {
	int x = 1;
	double result;

	result = asin(x);

	cout << "asin(x) = " << result << " radians" << endl;
	// Converting result to degrees
	cout << "asin(x) = " << result * 180 / PI << " degrees";

	_getch();
	return 0;
}