#pragma once
#ifndef GUI_MAIN_H
#define GUI_MAIN_H
#include <allegro5\allegro.h>
#include <allegro5/allegro_font.h>

class GuiObject {
public:

	virtual void draw() = 0;
	virtual void update() = 0;
	virtual void check() = 0;

	virtual bool needsRedraw() = 0;

	virtual int getZIndex() = 0;
};

class View : GuiObject {
private:

public:
	View() {


	}

	~View() {


	}

	void draw() {

	}

	void update() {

	}

	void check() {

	}

	bool needsRedraw() {


	}

	int getZIndex() {
		return 0;
	}
};

class GuiManager {
private:
	ALLEGRO_DISPLAY * display;
	ALLEGRO_FONT* font;

	ALLEGRO_EVENT_QUEUE *queue;

	bool needsRedraw = true;
public:
	GuiManager(ALLEGRO_EVENT_QUEUE *q, int w, int h);
	~GuiManager();

	void draw();
};


#endif