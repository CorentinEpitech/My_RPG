/*
** EPITECH PROJECT, 2019
** my_rpg_2018
** File description:
** my_menu_settings_buttons
*/

#include "my_rpg.h"

void buttons_music(game_t *game)
{
    if (game->mouse->pos_click_x < game->buttons->new_game.x + 390 &&
    game->mouse->pos_click_x > game->buttons->new_game.x &&
    game->mouse->pos_click_y < game->buttons->new_game.y + 75 &&
    game->mouse->pos_click_y > game->buttons->new_game.y) {
        if (game->scene->music_status == 1)
            game->scene->music_status = 0;
        else
            game->scene->music_status = 1;
    }
}

void buttons_return(game_t *game)
{
    if (game->mouse->pos_click_x < game->buttons->settings_return.x + 390 &&
    game->mouse->pos_click_x > game->buttons->settings_return.x &&
    game->mouse->pos_click_y < game->buttons->settings_return.y + 75 &&
    game->mouse->pos_click_y > game->buttons->settings_return.y) {
        if (game->scene->game_status == 3)
            game->scene->game_status = 4;
        else
            game->scene->game_status = 0;
    }
}