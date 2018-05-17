#pragma once
#ifndef EXPOS_PROGRAM_H
#define EXPOS_PROGRAM_H
#include <allegro5\allegro.h>
#include "gui_main.h"

class Program {
private:
	GuiManager * guiManager;

	ALLEGRO_EVENT_QUEUE *queue;

	bool running = true;

	void handleEvents();
public:
	Program();

	~Program();

	void run();
};

#endif