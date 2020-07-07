/*
** EPITECH PROJECT, 2019
** rpg
** File description:
** .h
*/

#ifndef MY_RPG_H_
#define MY_RPG_H_

#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include <SFML/System.h>
#include <SFML/Window.h>
#include <SFML/Window/Export.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

#define IMG_COL "RSC/map_collision.png"
#define HOUSE "RSC/house.png"
#define HOUSE_COLLISION "RSC/house_collision.png"
#define PNJ_DIAL_1 "RSC/quest_1.png"
#define ENNEMY "RSC/enemy.png"
#define GOLDEN_APPLE "RSC/golden_apple.png"
#define END_MESSAGE "RSC/end_message.png"

typedef struct chara_s {
    sfSprite *sprite;
    sfSprite *sprite2;
    sfTexture *texture_right;
    sfTexture *texture_left;
    sfTexture *texture_down;
    sfTexture *texture_up;
    sfTexture *texture_idle;
    sfTexture *texture_attack;
    sfTexture *texture_attack_left;
    sfIntRect rect_left;
    sfIntRect rect_up;
    sfVector2f pos;
    sfClock *clock;
    sfClock *clock2;
    sfTime time;
    float seconds;
    int status;
    int life;
    int magic_point;
} chara_t;

typedef struct fight_s {
    sfSprite *Sscene;
    sfTexture *Tscene;
    sfSprite *Splayer;
    sfTexture *Tplayer;
    sfTexture *Tplayer_attack;
    sfTexture *Tplayer_attackSP;
    sfVector2f player_pos;
    sfIntRect rect_player;
    sfIntRect rect_player2;
    sfClock *clock;
    sfTime time;
    float seconds;
    int player_status;
    sfVector2f button_attack;
    sfVector2f button_attackSP;
    sfFont *font;
    sfText *text;
    sfText *text2;
    sfText *enemy_text;
    sfVector2f enemy_text_pos;
    sfVector2f text_pos;
    sfVector2f text_pos2;
    int fight_status;
} fight_t;

typedef struct pnj_s {
    sfSprite *pnj_foret;
    sfTexture *end_message;
    sfSprite *exclamation;
    sfTexture *t_pnj_foret;
    sfTexture *t_exclamation;
    sfVector2f v_pnj_foret;
    sfVector2f v_exclamation;
    sfVector2i mouse;
    sfText *press_e;
    int mouse_x;
    int mouse_y;
    sfVector2f text_position;
    sfTexture *dial_first_te;
    sfSprite *dial_first_sp;
    sfVector2f dial_position;
} pnj_t;

typedef struct buttons_s {
    sfFont *font;
    sfVector2f one;
    sfVector2f two;
    sfVector2f three;
    sfVector2f four;
    sfVector2f five;
    sfVector2f six;
    sfVector2f seven;
    sfVector2f eight;
    sfText *new;
    sfText *load;
    sfText *sett;
    sfText *ex;
    sfText *music;
    sfText *on;
    sfText *off;
    sfText *set_ret;
    sfVector2f new_game;
    sfVector2f load_game;
    sfVector2f settings;
    sfVector2f exit;
    sfVector2f settings_return;
    sfVector2f pos_on;
} buttons_t;

typedef struct menu_pause_s {
    sfSprite *Smenu_pause;
    sfTexture *Tmenu_pause;
    sfVector2f resume;
    sfVector2f save;
    sfVector2f settings;
    sfVector2f return_menu;
    sfVector2f help;
} menu_pause_t;

typedef struct menu_s {
    sfVector2f pos_menu;
    sfTexture *Tmenu;
    sfSprite *Smenu;
} menu_t;

typedef struct inventory_s{
    sfSprite *Sinventory;
    sfTexture *Tinventory;
    sfVector2f resume;
    sfVector2f apple_position;
    sfSprite *golden_apple_sp;
    sfTexture *golden_apple_tx;
} inventory_t;

typedef struct scene_s {
    int game_status;
    int music_status;
} scene_t;

typedef struct mouse_s {
    int pos_click_x;
    int pos_click_y;
    int keyboard_escape;
    int keyboard_inventory;
} mouse_t;

typedef struct map_s {
    sfSprite *Smap;
    sfTexture *Tmap;
    sfImage *Cmap;
} map_t;

typedef struct fx_s {
    sfSprite *Ssmoke;
    sfSprite *Ssmoke2;
    sfSprite *Sshadow;
    sfTexture *Tsmoke;
    sfTexture *Tshadow;
    sfVector2f pos_smoke;
    sfVector2f pos_smoke2;
    sfVector2f pos_shadow;
    sfIntRect rect_smoke;
    sfClock *clock;
    sfTime time;
    float seconds;
} fx_t;

typedef struct house_s {
    sfTexture *house_texture;
    sfSprite *house_sprite;
    sfImage *Chouse;
    sfTexture *ennemy_texture;
    sfSprite *ennemy_sprite;
    sfVector2f ennemy_position;
} house_t;

typedef struct enemy_s {
    sfSprite *Senemy;
    sfTexture *Tenemy_idle;
    sfTexture *Tenemy_attack;
    sfVector2f enemy_pos;
    sfIntRect enemy_rect;
    sfIntRect enemy_rect2;
    sfClock *clock;
    sfTime time;
    float seconds;
    int enemy_status;
    int life;
} enemy_t;

typedef struct game_s {
    sfRenderWindow *windows;
    sfTime time;
    float seconds;
    int status_temp;
    int quest_status;
    house_t *house;
    chara_t *chara;
    scene_t *scene;
    menu_t *menu;
    menu_pause_t *menu_pause;
    mouse_t *mouse;
    map_t *map;
    buttons_t *buttons;
    fx_t *fx;
    pnj_t *pj;
    fight_t *fight;
    inventory_t *inventory;
    enemy_t *enemy;
} game_t;


#endif

void my_rpg(void);
void my_scene(game_t *game);
void check_scene(game_t *game);
void check_buttons(game_t *game);
void alloc_struct(game_t *game);

// struct

void my_game_init(game_t *game);

// scene

void my_rpg(void);
void my_scene(game_t *game);
void check_scene(game_t *game);
void check_buttons(game_t *game);
void check_keyboard(game_t *game);

// player

void my_sprite_chara(game_t *game);
void set_player(game_t *game);
void chara_move(game_t *game);
void chara_move2(game_t *game, sfVector2f scale, int direction);
void move_player_left(game_t *game);
void move_player_up(game_t *game);
void move_rect_left(sfIntRect rect, int offset, int max_value, game_t *game);
void move_rect_up(sfIntRect rect, int offset, int max_value, game_t *game);

// texture

void set_texture_right(game_t *game);
void set_texture_left(game_t *game);
void set_texture_up(game_t *game);
void set_texture_down(game_t *game);

//  menu

void my_sprite_menu(game_t *game);
void my_menu(game_t *game);
void my_menu_settings(game_t *game);
void buttons_new_game(game_t *game);
void buttons_load_game(game_t *game);
void buttons_settings(game_t *game);
void buttons_exit(game_t *game);

//  menu pause

void my_sprite_menu_pause(game_t *game);
void my_menu_pause(game_t *game);

//  buttons

void my_text_init_struct(game_t *game);
void my_text_set(game_t *game);
void my_text_pos_one(game_t *game);
void my_text_set_settings(game_t *game);
void buttons_new_game(game_t *game);
void buttons_load_game(game_t *game);
void buttons_settings(game_t *game);
void buttons_exit(game_t *game);
void buttons_return(game_t *game);
void buttons_music(game_t *game);
void buttons_resume(game_t *game);
void buttons_save(game_t *game);
void buttons_pause_settings(game_t *game);
void buttons_return_menu(game_t *game);
void buttons_help(game_t *game);
void my_text_print(game_t *game);
void my_text_print_settings(game_t *game);

//  mouse
void check_mouse(game_t *game);

//  game
void my_game(game_t *game);
void my_sprite_game(game_t *game);

// fight
void my_game_init_fight(game_t *game);
void my_game_init_fx(game_t *game);
void my_sprite_fight(game_t *game);
void move_player_attack(game_t *game);
void move_player_attack2(game_t *game);
void move_player_idle(game_t *game);
void fight_scene(game_t *game);

//FX

void move_smoke(game_t *game);
void move_rect(sfIntRect rect, int offset, int max_value, game_t *game);

//pnj
void init_pnj(game_t *game);
void drawsprite_pnj(pnj_t *pnj, game_t *gm);
void pnjpos(game_t *game);
void scale(game_t *game);
int expnj(game_t *game);

//colisions
int check_access(game_t *game, int direction);
void scene_house(game_t *game);
void int_house(game_t *game);

//Codding style correction

void my_game_init_menu (game_t *game);
void my_game_init_mouse (game_t *game);
void my_game_init_inventory (game_t *game);
void my_game_init_enemy (game_t *game);
void init_enemy(game_t *game);
void chara_move4(game_t *game);
void chara_move3(game_t *game, sfVector2f scale, int direction);
void chara_move_5(game_t *game, sfVector2f scale, int direction);
void move_enemy_idle(game_t *game);
void move_enemy_attack(game_t *game);
void scene_inventory(game_t *game);
void button_attackSP(game_t *game);
void enemy_fight(game_t *game);
void draw_fight(game_t *game);
void my_sprite_fight2(game_t *game);
void button_attack(game_t *game);
void init_pnj2(game_t *game);
void check_keyboard2(game_t *game);
void buttons_resume_inventory(game_t *game);
void check_buttons_fight(game_t *game);
void set_texture_attack(game_t *game);
