/*
** EPITECH PROJECT, 2019
** rpg
** File description:
** fight 2.c
*/

#include "../include/my_rpg.h"

void check_buttons_fight(game_t *game)
{
    if (game->scene->game_status == 5) {
        button_attack(game);
        button_attackSP(game);
    }
}

void button_attack(game_t *game)
{
    if (game->fight->fight_status == 1)
    if (game->mouse->pos_click_x < game->fight->button_attack.x + 232 &&
        game->mouse->pos_click_x > game->fight->button_attack.x &&
        game->mouse->pos_click_y < game->fight->button_attack.y + 39 &&
        game->mouse->pos_click_y > game->fight->button_attack.y) {
            game->fight->player_status = 1;
            game->enemy->life -= 20;
    }
}

void button_attackSP(game_t *game)
{
    if (game->fight->fight_status == 1)
    if (game->mouse->pos_click_x < game->fight->button_attackSP.x + 232 &&
        game->mouse->pos_click_x > game->fight->button_attackSP.x &&
        game->mouse->pos_click_y < game->fight->button_attackSP.y + 39 &&
        game->mouse->pos_click_y > game->fight->button_attackSP.y) {
            game->fight->player_status = 2;
            game->chara->magic_point -= 15;
            game->enemy->life -= 50;
    }
}
