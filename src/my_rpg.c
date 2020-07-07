/*
** EPITECH PROJECT, 2019
** rpg
** File description:
** rpg
*/

#include "../include/my_rpg.h"

void check_event(game_t *game)
{
    sfEvent event;
    while (sfRenderWindow_pollEvent(game->windows, &event)) {
        if (event.type == sfEvtClosed)
            sfRenderWindow_close(game->windows);
        check_mouse(game);
    }
}

void my_rpg(void)
{
    game_t *game = malloc(sizeof(game_t));
    my_game_init(game);
    init_pnj(game);
    init_enemy(game);
    my_sprite_fight(game);
    init_pnj(game);
    my_sprite_game(game);
    my_sprite_chara(game);
    my_sprite_menu(game);
    scale(game);
    my_text_set(game);
    int_house(game);
    while (sfRenderWindow_isOpen(game->windows)) {
        sfRenderWindow_clear(game->windows, sfBlack);
        my_scene(game);
        check_scene(game);
        sfRenderWindow_display(game->windows);
        check_event(game);
    }
}
