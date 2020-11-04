#include "rationals.h"

#include <iostream>
#include <cstdlib> // for abs
#include <string> // for to_string
using namespace std;

// FIXME: implement this method
Rational::Rational(int n, int d) {
    // set numer and denom, and then simplify
    numer = n;
    denom = d;
    simplify();
    // remember that constructors don't return anything!
    // They implicitly "return" a newly-made object.
}

// FIXME: implement this method
std::string Rational::toPrettyString() const {
    // You can't call simplify anymore because of "const", but you 
    // should never need to because it'll be called for you now
    // whenever a Rational is constructed.

    // return a pretty version of the current object
    string result;
    result = to_string(numer) + " " + "/" + " " + to_string(denom);
    return result;
}

// FIXME: implement this method
Rational Rational::operator*(const Rational& other) const {
    // return a new Rational that is the result of multiplying the current object with other
    // remember that numer2 is other.numer now, etc.
    // remember that simplification is done in the constructor,
    // so you don't have to do it twice

    return Rational(this->numer*other.numer, this->denom*other.denom);
}

// FIXME: implement this method
Rational Rational::operator+(const Rational& other) const {
    // return a new Rational that is the result of multiplying the current object with other

    return Rational(this->numer*other.denom+this->denom*other.numer, this->denom*other.denom);
}

/*
There's no need for GCD to be a member function.
*/
int GCD(int a, int b) {
    while (b != 0) {
        int newA = b;
        int newB = a % b;
        a = newA;
        b = newB;
    }

    return a;
}

// FIXME: implement this method to simplify the current object
// If the number is negative, the numer should become negative (*not* the denom).
void Rational::simplify() {
    // Same as last lab, but there's no need for parameters! 
    // numer and denom are member variables, so they're already defined--
    // it's your job to change them here

    // First, figure out if the rational number is negative or positive by 
    // checking 3 cases:
    // 1. if numer < 0 and denom > 0, it's negative
    // 2. if numer > 0 and denom < 0, it's negative
    // 3. if none of the above are true, then it's positive
    // Save that information for later, because we'll need to make numer and denom
    // be positive for a while.
    // convert numer and denom to positive numbers
    // simplify numer and denom using the GCD
    int temp_numer, temp_denom, gcd;
    temp_numer = abs(numer);
    temp_denom = abs(denom);
    gcd = GCD(temp_numer, temp_denom);
    if (gcd <= abs(numer) and gcd <= abs(denom))
    {
        temp_numer /= gcd;
        temp_denom /= gcd;
    }
    if ((numer < 0 and denom >= 0) or (numer >= 0 and denom < 0))
    {
        numer = -temp_numer;
        denom = temp_denom;
    }
    else
    {
        numer = temp_numer;
        denom = temp_denom;
    }
}