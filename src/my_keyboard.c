/*
** EPITECH PROJECT, 2019
** my_rpg_2018
** File description:
** my_keyboar
*/

#include "my_rpg.h"

void check_keyboard(game_t *game)
{
    sfEvent event;
    if (sfKeyboard_isKeyPressed(sfKeyEscape))
        if (game->mouse->keyboard_escape == 0)
            game->mouse->keyboard_escape = 1;
    if (sfKeyboard_isKeyPressed(sfKeyTab))
        if (game->mouse->keyboard_inventory == 0)
            game->mouse->keyboard_inventory = 1;
}
