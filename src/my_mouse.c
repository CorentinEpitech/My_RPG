/*
** EPITECH PROJECT, 2019
** my_rpg_2018
** File description:
** mouse
*/

#include "my_rpg.h"

void check_mouse(game_t *game)
{
    sfEvent event;
    game->pj->mouse_x = event.mouseButton.x;
    game->pj->mouse_y = event.mouseButton.y;
    if (sfEvtMouseButtonPressed && sfMouse_isButtonPressed(sfMouseLeft)) {
        game->mouse->pos_click_x = event.mouseButton.x;
        game->mouse->pos_click_y = event.mouseButton.y;
        check_buttons(game);
        check_buttons_fight(game);
    }
}

void check_buttons(game_t *game)
{
    if (game->scene->game_status == 0) {
        buttons_new_game(game);
        buttons_load_game(game);
        buttons_settings(game);
        buttons_exit(game);
    }
    if (game->scene->game_status == 1 || game->scene->game_status == 3) {
        buttons_music(game);
        buttons_return(game);
    }
    if ((game->scene->game_status == 4 && game->mouse->keyboard_escape == 1) ||
    (game->scene->game_status == 6 && game->mouse->keyboard_escape == 1)) {
        buttons_resume(game);
        buttons_save(game);
        buttons_pause_settings(game);
        buttons_return_menu(game);
        buttons_help(game);
    }
    if (game->mouse->keyboard_inventory == 1)
        buttons_resume_inventory(game);
}
