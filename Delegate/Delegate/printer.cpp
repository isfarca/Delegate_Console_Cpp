#include "stdafx.h"
#include "printer.h"

// Output the print.
void Printer::Print()
{
	actualPrinter->Print();
}

// Switch the printer.
void Printer::SwitchTo(Printable* otherPrinter)
{
	this->actualPrinter = otherPrinter;
}