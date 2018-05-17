#include "stdafx.h"
#include "gui_main.h"

GuiManager::GuiManager(ALLEGRO_EVENT_QUEUE *q, int w, int h) : queue(q) {
	display = al_create_display(w, h);
	al_register_event_source(queue, al_get_display_event_source(display));

	al_init_font_addon();

	font = al_create_builtin_font();
}

GuiManager::~GuiManager() {
	al_destroy_font(font);
	al_destroy_display(display);
}

void GuiManager::draw() {
	if (needsRedraw) {
		al_clear_to_color(al_map_rgb(0, 0, 0));
		al_draw_text(font, al_map_rgb(255, 255, 255), 400, 300, ALLEGRO_ALIGN_CENTER, "Welcome to Allegro!");
		al_flip_display();
	}
	needsRedraw = false;
}