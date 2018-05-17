#include "stdafx.h"
#include "program.h"

void Program::handleEvents() {
	ALLEGRO_EVENT ev;

	while (al_get_next_event(queue, &ev)) {


		switch (ev.type) {
		case ALLEGRO_EVENT_DISPLAY_CLOSE:
			running = false;
			break;
		}

	}

}

Program::Program() {
	al_init();
	queue = al_create_event_queue();

	al_install_keyboard();
	al_install_mouse();

	al_register_event_source(queue, al_get_keyboard_event_source());
	al_register_event_source(queue, al_get_mouse_event_source());

	guiManager = new GuiManager(queue, 640, 480);
}

Program::~Program() {
	al_destroy_event_queue(queue);
}

void Program::run() {
	while (running) {
		guiManager->draw();

		handleEvents();
	}
}