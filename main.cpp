#include <iostream>
#include "stringlinkedlist.h"
using namespace std;


// Variables and macros for assertions, DO NOT CHANGE ****
int totalAssertions = 0;
int passedAssertions  = 0;
#define expect( chk )  \
    totalAssertions++; \
    if (!(chk)) \
    printf("\x1B[31mAssertion (%s) failed %s at line %d\033[0m\t\t\n", #chk, __FILE__,__LINE__); \
    else { \
    printf("\x1B[32mPassed line %d: %s\033[0m\t\t\n", __LINE__, #chk); \
    passedAssertions++; \
    }
#define assertionReport() { \
    printf("==========================================\n"); \
    printf("Passed %d of %d assertions\n",passedAssertions,totalAssertions); \
    printf("\n"); \
    }
//*******************************************************

int main()
{
    StringLinkedList L;

    expect(L.empty() == true);

    L.addFront("ATL");
    L.addFront("WIS");

    cout << L << endl;

    expect(L.front() == "WIS");
    L.removeFront();
    expect(L.front() == "ATL");
    expect(L.empty() == false);


    return 0;
}
