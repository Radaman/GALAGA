#ifndef MAIN_H_INCLUDED
#define MAIN_H_INCLUDED
#define ENM1 al_load_bitmap("img/En01.PNG")
#define ENM2 al_load_bitmap("img/En02.PNG")
#define ENM3 al_load_bitmap("img/En03.PNG")
#define ENM4 al_load_bitmap("img/En04.PNG")
#define JEFE al_load_bitmap("img/jefe1.PNG")
#include <stdio.h>
#include <pthread.h>
#include <unistd.h>

#include <allegro.h>
#include <allegro_image.h>
#include <allegro_native_dialog.h>
#include <allegro_primitives.h>
#include <allegro_font.h>
#include <allegro_ttf.h>

#include "objects.h"

#define WIDTH 640
#define HEIGHT 480

extern int NUM_BULLETS, NUM_ENEMIES;
extern bool done, render, colision;
extern int score,vidas;

int bbcollision(int b1_x, int b1_y, int b1_w, int b1_h, int b2_x, int b2_y, int b2_w, int b2_h);


#endif // MAIN_H_INCLUDED
