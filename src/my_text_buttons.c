/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2018
** File description:
** my_text_buttons
*/

#include "my_rpg.h"

void my_text_set(game_t *game)
{
    sfText_setString(game->buttons->new, "New Game");
    sfText_setFont(game->buttons->new, game->buttons->font);
    sfText_setCharacterSize(game->buttons->new, 50);
    sfText_setPosition(game->buttons->new, game->buttons->one);
    sfText_setString(game->buttons->load, "Load Game");
    sfText_setFont(game->buttons->load, game->buttons->font);
    sfText_setCharacterSize(game->buttons->load, 50);
    sfText_setPosition(game->buttons->load, game->buttons->two);
    sfText_setString(game->buttons->sett, "Settings");
    sfText_setFont(game->buttons->sett, game->buttons->font);
    sfText_setCharacterSize(game->buttons->sett, 50);
    sfText_setPosition(game->buttons->sett, game->buttons->three);
    sfText_setString(game->buttons->ex, "Exit");
    sfText_setFont(game->buttons->ex, game->buttons->font);
    sfText_setCharacterSize(game->buttons->ex, 50);
    sfText_setPosition(game->buttons->ex, game->buttons->four);
    my_text_set_settings(game);
}

void my_text_set_settings(game_t *game)
{
    sfText_setString(game->buttons->music, "Music");
    sfText_setFont(game->buttons->music, game->buttons->font);
    sfText_setCharacterSize(game->buttons->music, 50);
    sfText_setPosition(game->buttons->music, game->buttons->six);
    sfText_setString(game->buttons->on, "On");
    sfText_setFont(game->buttons->on, game->buttons->font);
    sfText_setCharacterSize(game->buttons->on, 50);
    sfText_setString(game->buttons->off, "Off");
    sfText_setFont(game->buttons->off, game->buttons->font);
    sfText_setCharacterSize(game->buttons->off, 50);
    sfText_setString(game->buttons->set_ret, "Retour");
    sfText_setFont(game->buttons->set_ret, game->buttons->font);
    sfText_setCharacterSize(game->buttons->set_ret, 50);
    sfText_setPosition(game->buttons->set_ret, game->buttons->eight);
}