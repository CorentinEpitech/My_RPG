/*
** EPITECH PROJECT, 2019
** my_rpg_2018
** File description:
** my_scene
*/

#include "my_rpg.h"

void check_scene(game_t *game)
{
    if (game->scene->game_status == 4 && game->mouse->keyboard_escape == 0 || game->scene->game_status == 6)
        chara_move(game);
}

void my_scene(game_t *game)
{
    if (game->scene->game_status == 0)
        my_menu(game);
    if (game->scene->game_status == 1 || game->scene->game_status == 3)
        my_menu_settings(game);
    if (game->scene->game_status == 4) {
        game->status_temp = 4;
        my_game(game);
    }
    if (game->scene->game_status == 5)
        fight_scene(game);
    if (game->scene->game_status == 6) {
        game->status_temp = 6;
        scene_house(game);
    }
}
