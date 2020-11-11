#include <iostream>
#include <cmath>
using namespace std;

#include "sqrt.h"
#include "testing.h"

class squareRootTests {
public:
    void squareRootTest1();
    void squareRootTest2();
    void squareRootTest3();
    void squareRootTest4();
    void squareRootTest5();
    void squareRootTest6();
    void squareRootTest7();
};

int main() {
    squareRootTests tests;

    tests.squareRootTest1();
    tests.squareRootTest2();
    tests.squareRootTest3();
    // FIXME: Write 4 more tests and run them here
    // Follow my pattern and add them to the squareRootTests class
    tests.squareRootTest4();
    tests.squareRootTest5();
    tests.squareRootTest6();
    tests.squareRootTest7();
    return 0;
}

void squareRootTests::squareRootTest1() {
    assertTrue(abs(squareRoot(2) - 1.4142136) < 0.0001, "squareRoot(2)");
}

void squareRootTests::squareRootTest2() {
    assertTrue(abs(squareRoot(0.5) - 0.7071068) < 0.0001, "squareRoot(0.5)");
}

void squareRootTests::squareRootTest3() {
    bool threwException = false;
    try {
        squareRoot(-1.0);
    }
    catch (runtime_error& e) {
        threwException = true;
    }
    assertTrue(threwException, "squareRoot(-1.0)");
}
void squareRootTests::squareRootTest4() {
    assertTrue(abs(squareRoot(81) - 9) < 0.0001, "squareRoot(81)");
}
void squareRootTests::squareRootTest5() {
    bool threwException = false;
    try {
        squareRoot(-2.2);
    }
    catch (runtime_error& e) {
        threwException = true;
    }
    assertTrue(threwException, "squareRoot(-2.2)");
}
void squareRootTests::squareRootTest6() {
    assertTrue(abs(squareRoot(0.22) - 0.4690415) < 0.0001, "squareRoot(0.22)");
}
void squareRootTests::squareRootTest7() {
    assertTrue(abs(squareRoot(121) - 11) < 0.0001, "squareRoot(121)");
}