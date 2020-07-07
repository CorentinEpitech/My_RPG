/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2018
** File description:
** init_struct3
*/

#include "my_rpg.h"

void my_game_init_menu(game_t *game)
{
    game->scene->game_status = 0;
    game->scene->music_status = 0;
    game->menu->pos_menu.x = 0;
    game->menu->pos_menu.y = 0;
    game->status_temp = 4;
    game->quest_status = 0;
    
}

void my_game_init_mouse(game_t *game)
{
    game->mouse->pos_click_x = 0;
    game->mouse->pos_click_y = 0;
    game->mouse->keyboard_escape = 0;
    game->mouse->keyboard_inventory = 0;
}

void my_game_init_fx(game_t *game)
{
    game->fx->pos_smoke.x = 1195;
    game->fx->pos_smoke.y = 388;
    game->fx->pos_smoke2.x = 430;
    game->fx->pos_smoke2.y = 331;
    game->fx->rect_smoke.top = 0;
    game->fx->rect_smoke.left = 0;
    game->fx->rect_smoke.width = 16;
    game->fx->rect_smoke.height = 16;
}

void my_game_init_fight(game_t *game)
{
    game->fight->player_pos.x = 500;
    game->fight->player_pos.y = 500;
    game->fight->rect_player.top = 0;
    game->fight->rect_player.left = 0;
    game->fight->rect_player.width = 261;
    game->fight->rect_player.height = 257;
    game->fight->rect_player2.top = 0;
    game->fight->rect_player2.left = 0;
    game->fight->rect_player2.width = 350;
    game->fight->rect_player2.height = 257;
    game->fight->button_attack.x = 1377;
    game->fight->button_attack.y = 804;
}

void my_game_init_inventory(game_t *game)
{
    game->inventory->resume.x = 1480;
    game->inventory->resume.y = 130;
    game->fight->button_attackSP.x = 1629;
    game->fight->button_attackSP.y = 804;
    game->fight->text_pos.x = 80;
    game->fight->text_pos.y = 800;
    game->fight->text_pos2.x = 80;
    game->fight->text_pos2.y = 860;
    game->fight->enemy_text_pos.x = 900;
    game->fight->enemy_text_pos.y = 785;
    game->fight->fight_status = 1;
}