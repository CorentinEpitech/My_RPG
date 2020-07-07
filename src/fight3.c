/*
** EPITECH PROJECT, 2019
** rpg
** File description:
** fight3
*/

#include "../include/my_rpg.h"

void move_player_attack(game_t *game)
{
    sfSprite_setTexture(game->fight->Splayer, game->fight->Tplayer_attack,
                        sfTrue);
    sfSprite_setTextureRect(game->fight->Splayer, game->fight->rect_player);
    game->fight->time = sfClock_getElapsedTime(game->fight->clock);
    game->fight->seconds = game->fight->time.microseconds / 100000.0;
    if (game->fight->seconds > 1.0) {
        game->fight->rect_player.left += 261;
        if (game->fight->rect_player.left >= 1030) {
            game->fight->rect_player.left = 0;
            game->fight->player_status = 0;
            game->fight->fight_status = 2;
        }
        sfClock_restart(game->fight->clock);
    }
}

void move_player_attack2(game_t *game)
{
    sfSprite_setTexture(game->fight->Splayer, game->fight->Tplayer_attackSP,
                        sfTrue);
    sfSprite_setTextureRect(game->fight->Splayer, game->fight->rect_player2);
    game->fight->time = sfClock_getElapsedTime(game->fight->clock);
    game->fight->seconds = game->fight->time.microseconds / 100000.0;
    if (game->fight->seconds > 1.0) {
        game->fight->rect_player2.left += 350;
        if (game->fight->rect_player2.left >= 2450) {
            game->fight->rect_player2.left = 0;
            game->fight->player_status = 0;
            game->fight->fight_status = 2;
        }
        sfClock_restart(game->fight->clock);
    }
}

void move_player_idle(game_t *game)
{
    game->fight->time = sfClock_getElapsedTime(game->fight->clock);
    game->fight->seconds = game->fight->time.microseconds / 150000.0;
    if (game->fight->seconds > 1.0) {
        game->fight->rect_player.left += 261;
        if (game->fight->rect_player.left >= 770)
            game->fight->rect_player.left = 0;
        sfClock_restart(game->fight->clock);
    }
}
