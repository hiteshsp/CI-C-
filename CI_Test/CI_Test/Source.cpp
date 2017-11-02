#include "CI_Test.h"

using namespace std;

int main()
{
	cout << "Hi GGK" << endl;

	CI_Test *ci_test = new CI_Test();
	ci_test->display("Gret!!! CI/CD test is successful");

	getchar();
}