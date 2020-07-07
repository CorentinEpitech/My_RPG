/*
** EPITECH PROJECT, 2019
** my_rpg_2018
** File description:
** my_menu_buttons
*/

#include "my_rpg.h"

void buttons_new_game(game_t *game)
{
    if (game->mouse->pos_click_x < game->buttons->new_game.x + 390 &&
    game->mouse->pos_click_x > game->buttons->new_game.x &&
    game->mouse->pos_click_y < game->buttons->new_game.y + 75 &&
    game->mouse->pos_click_y > game->buttons->new_game.y) {
        game->scene->game_status = 4;
    }
}

void buttons_load_game(game_t *game)
{
    if (game->mouse->pos_click_x < game->buttons->load_game.x + 390 &&
    game->mouse->pos_click_x > game->buttons->load_game.x &&
    game->mouse->pos_click_y < game->buttons->load_game.y + 75 &&
    game->mouse->pos_click_y > game->buttons->load_game.y) {
    }
}

void buttons_settings(game_t *game)
{
    if (game->mouse->pos_click_x < game->buttons->settings.x + 390 &&
    game->mouse->pos_click_x > game->buttons->settings.x &&
    game->mouse->pos_click_y < game->buttons->settings.y + 75 &&
    game->mouse->pos_click_y > game->buttons->settings.y) {
        game->scene->game_status = 1;
    }
}

void buttons_exit(game_t *game)
{
    if (game->mouse->pos_click_x < game->buttons->exit.x + 390 &&
    game->mouse->pos_click_x > game->buttons->exit.x &&
    game->mouse->pos_click_y < game->buttons->exit.y + 75 &&
    game->mouse->pos_click_y > game->buttons->exit.y) {
        sfRenderWindow_close(game->windows);
    }
}