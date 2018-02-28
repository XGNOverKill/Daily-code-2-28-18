#include <allegro5\allegro.h>
#include <allegro5\allegro_primitives.h>


int main() {
	
	ALLEGRO_DISPLAY*gamewindow = NULL;
	al_init();
	al_init_primitives_addon();
	gamewindow = al_create_display(700, 700);
al_clear_to_color(al_map_rgb(255, 255, 255));
	al_draw_filled_rectangle(300, 500, 500, 700, al_map_rgb(255, 0, 0));//house
	al_draw_filled_rectangle(400, 550, 430, 580, al_map_rgb(205, 201, 201));//window
	al_draw_filled_rectangle(450, 550, 480, 580, al_map_rgb(205, 201, 201));//window
	al_draw_filled_rectangle(400, 600, 450, 700, al_map_rgb(139, 115, 85));//door

	//al_draw_filled_rectangle(400, 600, 450, 700, al_map_rgb(205, 201, 201));//clout
	al_draw_filled_circle(250, 100, 50, al_map_rgb(205, 201, 201));//cloud
	al_draw_filled_circle(100, 100, 50, al_map_rgb(205, 201, 201));//cloud
	al_draw_filled_circle(185, 100, 100, al_map_rgb(205, 201, 201));//cloud

	al_draw_filled_triangle(300, 500, 500, 500, 500, 100, al_map_rgb(0, 0, 0));//roof
	al_draw_filled_circle(300, 300, 50, al_map_rgb(255, 255, 0));//sun
	al_rest(.1);
	
		
		al_flip_display();
		system("pause");
	
	al_destroy_display(gamewindow);
}