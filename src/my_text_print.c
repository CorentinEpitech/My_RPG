/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2018
** File description:
** my_text_print
*/

#include "my_rpg.h"

void my_text_print(game_t *game)
{
    sfRenderWindow_drawText(game->windows, game->buttons->new, NULL);
    sfRenderWindow_drawText(game->windows, game->buttons->load, NULL);
    sfRenderWindow_drawText(game->windows, game->buttons->sett, NULL);
    sfRenderWindow_drawText(game->windows, game->buttons->ex, NULL);
}

void my_text_print_settings(game_t *game)
{
    sfRenderWindow_drawText(game->windows, game->buttons->music, NULL);
    sfText_setPosition(game->buttons->on, game->buttons->pos_on);
    sfText_setPosition(game->buttons->off, game->buttons->pos_on);
    if (game->scene->music_status == 0) {
        sfRenderWindow_drawText(game->windows, game->buttons->on, NULL);
    } else {
        sfRenderWindow_drawText(game->windows, game->buttons->off, NULL);
    }
    sfRenderWindow_drawText(game->windows, game->buttons->set_ret, NULL);
}