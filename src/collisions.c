/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2018
** File description:
** collisions
*/

#include "../include/my_rpg.h"

int check_access(game_t *game, int direction)
{
    sfColor color;
    int x = game->chara->pos.x + 40;
    int y = game->chara->pos.y + 40;

    if (direction == 1)
        if (game->scene->game_status == 6)
            y -= -15;
        else
            y -= 5;
    if (direction == 2)
        if (game->scene->game_status == 6)
            y += 75;
        else
            y += 5;

    if (direction == 3)
        if (game->scene->game_status == 6)
            x += 75;
        else
            x += 5;
    if (direction == 4)
        if (game->scene->game_status == 6)
            x -= -15;
        else
            x -= 5;
    if (game->scene->game_status == 6)
        color = sfImage_getPixel(game->house->Chouse, x, y);
    else if (game->scene->game_status == 4)
        color = sfImage_getPixel(game->map->Cmap, x, y);
    if (color.r == 0 && color.g == 0 && color.b == 0)
        return (1);
    return (0);
}
