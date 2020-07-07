/*
** EPITECH PROJECT, 2019
** my_rpg_2018
** File description:
** chara_move
*/

#include "my_rpg.h"

void chara_move(game_t *game)
{
    int direction = 0;
    sfEvent event;
    sfVector2f scale;

    if (1 == 1){
        game->chara->status = 0;
        sfSprite_setTexture(game->chara->sprite, game->chara->texture_idle,
        sfTrue);
        sfSprite_setTextureRect(game->chara->sprite, game->chara->rect_left);
    }
    chara_move2(game, scale, direction);

    chara_move_5(game, scale, direction);
    chara_move4(game);
}

void chara_move_5(game_t *game, sfVector2f scale, int direction)
{
    if (sfKeyboard_isKeyPressed(sfKeyS)) {
        direction = 2;
        if (check_access(game, direction) == 0) {
            set_texture_down(game);
            game->chara->status = 4;
            game->chara->pos.y += 5;
        }
    }
    if (sfKeyboard_isKeyPressed(sfKeyD)) {
        direction = 3;
        if (check_access(game, direction) == 0) {
            set_texture_right(game);
            game->chara->status = 1;
            game->chara->pos.x += 5;
        }
    }
}

void chara_move2(game_t *game, sfVector2f scale, int direction)
{
    if (sfKeyboard_isKeyPressed(sfKeyZ)) {
        direction = 1;
        if (game->chara->pos.y == 520 &&
            (game->chara->pos.x >= 1085 && game->chara->pos.x <= 1150) &&
            game->scene->game_status == 4) {
            game->chara->pos.x = 800;
            game->chara->pos.y = 350;
            game->scene->game_status = 6;
            scale.x = 2;
            scale.y = 2;
            sfSprite_scale(game->chara->sprite, scale);
            sfSprite_scale(game->chara->sprite2, scale);
        }
        chara_move3(game, scale, direction);
    }
}

void chara_move3(game_t *game, sfVector2f scale, int direction)
{
    if (game->chara->pos.y == 280 &&
            (game->chara->pos.x >= 765 && game->chara->pos.x <= 836) &&
            game->scene->game_status == 6) {
            game->chara->pos.x = 1100;
            game->chara->pos.y = 575;
            game->scene->game_status = 4;
            scale.x = 0.5;
            scale.y = 0.5;
            sfSprite_scale(game->chara->sprite, scale);
            sfSprite_scale(game->chara->sprite2, scale);
        }
        if (check_access(game, direction) == 0) {
            set_texture_up(game);
            game->chara->status = 3;
            game->chara->pos.y -= 5;
        }
}

void chara_move4(game_t *game)
{
    int direction = 0;

    if (sfKeyboard_isKeyPressed(sfKeyQ)) {
        direction = 4;
        if (check_access(game, direction) == 0) {
            set_texture_left(game);
            game->chara->status = 2;
            game->chara->pos.x -= 5;
        }
    }
    if (sfKeyboard_isKeyPressed(sfKeySpace)) {
            game->chara->status = 5;
            set_texture_attack(game);
    }
    if (sfKeyboard_isKeyPressed(sfKeyC))
            game->scene->game_status = 5;
    if (sfKeyboard_isKeyPressed(sfKeyV))
            game->scene->game_status = 0;
}
