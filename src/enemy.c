/*
** EPITECH PROJECT, 2019
** rpg
** File description:
** enemy
*/

#include "../include/my_rpg.h"

void init_enemy(game_t *game)
{
    game->enemy->Tenemy_idle = sfTexture_createFromFile(
        "./RSC/enemy_idle.png", NULL);
    game->enemy->Tenemy_attack = sfTexture_createFromFile(
        "./RSC/enemy_attack.png", NULL);
    game->enemy->Senemy = sfSprite_create();
    game->enemy->clock = sfClock_create();
    sfSprite_setTexture(game->enemy->Senemy, game->enemy->Tenemy_idle, sfTrue);
    sfSprite_setTextureRect(game->enemy->Senemy, game->enemy->enemy_rect);
    sfVector2f scale;
    scale.x = 6;
    scale.y = 6;
    sfSprite_scale(game->enemy->Senemy, scale);
}

void enemy_fight(game_t *game)
{
    sfEvent event;
    sfSprite_setPosition(game->enemy->Senemy, game->enemy->enemy_pos);
    sfRenderWindow_drawSprite(game->windows, game->enemy->Senemy, NULL);
    if (game->fight->fight_status == 2) {
        move_enemy_attack(game);
    }
    else {
        sfSprite_setTexture(game->enemy->Senemy, game->enemy->Tenemy_idle,
                            sfTrue);
        sfSprite_setTextureRect(game->enemy->Senemy, game->enemy->enemy_rect);
        move_enemy_idle(game);
    }
}

void move_enemy_attack(game_t *game)
{
    sfSprite_setTexture(game->enemy->Senemy, game->enemy->Tenemy_attack,
                        sfTrue);
    sfSprite_setTextureRect(game->enemy->Senemy, game->enemy->enemy_rect2);
    game->enemy->time = sfClock_getElapsedTime(game->enemy->clock);
    game->enemy->seconds = game->enemy->time.microseconds / 100000.0;
    if (game->enemy->seconds > 1.0) {
        game->enemy->enemy_rect2.left -= 96;
        if (game->enemy->enemy_rect2.left <= 0) {
            game->enemy->enemy_rect2.left = 864;
            game->fight->fight_status = 1;
        }
        sfClock_restart(game->enemy->clock);
    }
}

void move_enemy_idle(game_t *game)
{
    game->enemy->time = sfClock_getElapsedTime(game->enemy->clock);
    game->enemy->seconds = game->enemy->time.microseconds / 150000.0;
    if (game->enemy->seconds > 1.0) {
        game->enemy->enemy_rect.left += 96;
        if (game->enemy->enemy_rect.left >= 480)
            game->enemy->enemy_rect.left = 0;
        sfClock_restart(game->enemy->clock);
    }
    game->chara->life -= 25;
}
