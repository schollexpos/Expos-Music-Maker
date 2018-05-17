#include "stdafx.h"
#include <allegro5/allegro.h>
#include <allegro5/allegro_font.h>
#include <exception>
#include "gui_main.h"
#include "program.h"

void run() {
	try {
		Program program;

		program.run();
	}
	catch (std::exception& e) {

	}
}

int main()
{
	
	run();

	return 0;
}