// Delegate.cpp : Defines the entry point for the console application.

#include "stdafx.h"
#include "printer.h"
#include "colorPrinter.h"

using namespace std;

int main()
{
	// Declare variables.
	Printer myPrinter = Printer();

	// Printer test.
	myPrinter.Print();
	myPrinter.SwitchTo(new ColorPrinter());
	myPrinter.Print();

	// Wait for the next input.
	cin.get();

    return 0;
}