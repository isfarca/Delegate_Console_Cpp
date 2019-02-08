#include "printable.h"
#include "bwPrinter.h"

#pragma once

#ifndef PRINTER_H

#define PRINTER_H

class Printer
{
private:
	// Declare variables.
	Printable *actualPrinter = new BWPrinter;

public:
	// Output the print.
	void Print();

	// Switch the printer.
	void SwitchTo(Printable* otherPrinter);
};

#endif