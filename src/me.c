/*
** EPITECH PROJECT, 2019
** rpg
** File description:
** character
*/

#include "../include/my_rpg.h"

void my_sprite_chara(game_t *game)
{
    game->chara->texture_right = sfTexture_createFromFile(
        "./RSC/player_run_right.png", NULL);
    game->chara->texture_left = sfTexture_createFromFile(
        "./RSC/player_run_left.png", NULL);
    game->chara->texture_down = sfTexture_createFromFile(
        "./RSC/player_run_down.png", NULL);
    game->chara->texture_up = sfTexture_createFromFile(
        "./RSC/player_run_up.png", NULL);
    game->chara->texture_attack = sfTexture_createFromFile(
        "./RSC/player_attack.png", NULL);
    game->chara->texture_idle = sfTexture_createFromFile(
        "./RSC/player_idle.png", NULL);
    game->chara->sprite = sfSprite_create();
    game->chara->sprite2 = sfSprite_create();
    game->chara->clock = sfClock_create();
    game->chara->clock2 = sfClock_create();
    sfSprite_setTexture(game->chara->sprite, game->chara->texture_right, sfTrue);
    sfSprite_setTexture(game->chara->sprite2, game->chara->texture_up, sfTrue);
}

void set_player(game_t *game)
{
    sfSprite_setPosition(game->chara->sprite, game->chara->pos);
    sfSprite_setPosition(game->chara->sprite2, game->chara->pos);
    if (game->chara->status == 1 || game->chara->status == 2
        || game->chara->status == 0 || game->chara->status == 5 ) {
        move_player_left(game);
        sfRenderWindow_drawSprite(game->windows, game->chara->sprite, NULL);
    }
    if (game->chara->status == 3 || game->chara->status == 4
        || game->chara->status == 6) {
        move_player_up(game);
        sfRenderWindow_drawSprite(game->windows, game->chara->sprite2, NULL);
    }
    sfSprite_setTextureRect(game->chara->sprite, game->chara->rect_left);
    sfSprite_setTextureRect(game->chara->sprite2, game->chara->rect_up);
}

void move_player_left(game_t *game)
{
    int max = 480;
    if (game->chara->status == 5)
        max = 320;
    if (game->chara->status == 0)
        max = 240;
    game->chara->time = sfClock_getElapsedTime(game->chara->clock);
    game->chara->seconds = game->chara->time.microseconds / 75000.0;
    if (game->chara->seconds > 1.0) {
        move_rect_left(game->chara->rect_left, 80, max, game);
        sfClock_restart(game->chara->clock);
    }
}

void move_player_up(game_t *game)
{
    int max = 320;
    if (game->chara->status == 6)
        max = 320;
    if (game->chara->status == 0)
        max = 240;
    game->chara->time = sfClock_getElapsedTime(game->chara->clock2);
    game->chara->seconds = game->chara->time.microseconds / 75000.0;
    if (game->chara->seconds > 1.0) {
        move_rect_up(game->chara->rect_up, 80, max, game);
        sfClock_restart(game->chara->clock2);
    }
}

void move_rect_left(sfIntRect rect, int offset, int max_value, game_t *game)
{
    game->chara->rect_left.left += offset;
    if (game->chara->rect_left.left >= max_value)
        game->chara->rect_left.left = 0;
}

void move_rect_up(sfIntRect rect, int offset, int max_value, game_t *game)
{
    game->chara->rect_up.left += offset;
    if (game->chara->rect_up.left >= max_value)
        game->chara->rect_up.left = 0;
}
