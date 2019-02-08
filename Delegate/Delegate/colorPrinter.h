#include <iostream>
#include "printable.h"

#pragma once

#ifndef COLORPRINTER_H

#define COLORPRINTER_H

class ColorPrinter : public Printable
{
public:
	// Output the print.
	void Print();
};

#endif