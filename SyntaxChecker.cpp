// primitive SyntaxChecker for Wart assignment - goddard - 2016
#include <iostream>
using namespace std;
#include "Wart.h"

int main( ) 
{
   Wart W("Cogito ergo sum");
   W.encode( 3 );
   cout << W << endl;
   // should be: Ci gsoteougor m
}
