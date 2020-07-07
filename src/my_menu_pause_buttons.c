/*
** EPITECH PROJECT, 2019
** my_rpg_2018
** File description:
** my_menu_pause_buttons
*/

#include "my_rpg.h"

void buttons_resume(game_t *game)
{
    if (game->mouse->pos_click_x < game->menu_pause->resume.x + 400 &&
    game->mouse->pos_click_x > game->menu_pause->resume.x &&
    game->mouse->pos_click_y < game->menu_pause->resume.y + 80 &&
    game->mouse->pos_click_y > game->menu_pause->resume.y) {
        game->mouse->keyboard_escape = 0;
        game->scene->game_status = game->status_temp;
    }
}

void buttons_save(game_t *game)
{
    if (game->mouse->pos_click_x < game->menu_pause->save.x + 400 &&
    game->mouse->pos_click_x > game->menu_pause->save.x &&
    game->mouse->pos_click_y < game->menu_pause->save.y + 80 &&
    game->mouse->pos_click_y > game->menu_pause->save.y) {
    }
}

void buttons_pause_settings(game_t *game)
{
    if (game->mouse->pos_click_x < game->menu_pause->settings.x + 400 &&
    game->mouse->pos_click_x > game->menu_pause->settings.x &&
    game->mouse->pos_click_y < game->menu_pause->settings.y + 80 &&
    game->mouse->pos_click_y > game->menu_pause->settings.y) {
        game->scene->game_status = 3;
    }
}

void buttons_return_menu(game_t *game)
{
    if (game->mouse->pos_click_x < game->menu_pause->return_menu.x + 400 &&
    game->mouse->pos_click_x > game->menu_pause->return_menu.x &&
    game->mouse->pos_click_y < game->menu_pause->return_menu.y + 80 &&
    game->mouse->pos_click_y > game->menu_pause->return_menu.y) {
        game->scene->game_status = 0;
        game->mouse->keyboard_escape = 0;
    }
}

void buttons_help(game_t *game)
{
    if (game->mouse->pos_click_x < game->menu_pause->help.x + 400 &&
    game->mouse->pos_click_x > game->menu_pause->help.x &&
    game->mouse->pos_click_y < game->menu_pause->help.y + 75 &&
    game->mouse->pos_click_y > game->menu_pause->help.y) {
    }
}