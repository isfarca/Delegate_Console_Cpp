#include <iostream>
#include "printable.h"

#pragma once

#ifndef BWPRINTER_H

#define BWPRINTER_H

class BWPrinter : public Printable
{
public:
	// Output the print.
	void Print();
};

#endif