/*
** EPITECH PROJECT, 2019
** my_rpg_2018
** File description:
** my_menu
*/

#include "my_rpg.h"

void my_sprite_menu(game_t *game)
{
    game->menu->Smenu = sfSprite_create();
    game->menu->Tmenu = sfTexture_createFromFile("./RSC/menu/menu.png", NULL);
    sfSprite_setTexture(game->menu->Smenu, game->menu->Tmenu, sfTrue);
    my_sprite_menu_pause(game);
}

void my_sprite_menu_pause(game_t *game)
{
    game->menu_pause->Smenu_pause = sfSprite_create();
    game->menu_pause->Tmenu_pause = sfTexture_createFromFile(
        "./RSC/menu/menu_pause.png", NULL);
    sfSprite_setTexture(game->menu_pause->Smenu_pause,
                        game->menu_pause->Tmenu_pause, sfTrue);
}

void my_menu(game_t *game)
{
    sfSprite_setPosition(game->menu->Smenu, game->menu->pos_menu);
    sfRenderWindow_drawSprite(game->windows, game->menu->Smenu, NULL);
    my_text_print(game);
}

void my_menu_settings(game_t *game)
{
    sfSprite_setPosition(game->menu->Smenu, game->menu->pos_menu);
    sfRenderWindow_drawSprite(game->windows, game->menu->Smenu, NULL);
    my_text_print_settings(game);
}

void my_menu_pause(game_t *game)
{
    sfSprite_setPosition(game->menu_pause->Smenu_pause, game->menu->pos_menu);
    sfRenderWindow_drawSprite(game->windows,
                              game->menu_pause->Smenu_pause, NULL);
}
