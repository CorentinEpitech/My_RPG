/*
** EPITECH PROJECT, 2019
** rpg
** File description:
** txture character
*/

#include "../include/my_rpg.h"

void set_texture_right(game_t *game)
{
        sfSprite_setTexture(game->chara->sprite,
        game->chara->texture_right, sfTrue);
        sfSprite_setTextureRect(game->chara->sprite, game->chara->rect_left);
}

void set_texture_left(game_t *game)
{
        sfSprite_setTexture(game->chara->sprite,
        game->chara->texture_left, sfTrue);
        sfSprite_setTextureRect(game->chara->sprite, game->chara->rect_left);
}

void set_texture_up(game_t *game)
{
        sfSprite_setTexture(game->chara->sprite2,
        game->chara->texture_up, sfTrue);
        sfSprite_setTextureRect(game->chara->sprite2, game->chara->rect_up);
}

void set_texture_down(game_t *game)
{
        sfSprite_setTexture(game->chara->sprite2,
        game->chara->texture_down, sfTrue);
        sfSprite_setTextureRect(game->chara->sprite2, game->chara->rect_up);
}

void set_texture_attack(game_t *game)
{
        sfSprite_setTexture(game->chara->sprite, game->chara->texture_attack,
            sfTrue);
        sfSprite_setTextureRect(game->chara->sprite, game->chara->rect_left);
        game->chara->status == 6;
}
