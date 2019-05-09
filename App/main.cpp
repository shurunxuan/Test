#include "../Lib/TestLib.h"
#include <iostream>
#include "Compiler.h"

int main(int argc, char *argv[]) {
	std::cout << CompilerString() << std::endl;
	return testLib(argc, argv);
}
