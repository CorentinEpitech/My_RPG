/*
** EPITECH PROJECT, 2019
** rpg
** File description:
** struct 2
*/

#include "../include/my_rpg.h"



void my_text_init_struct(game_t *game)
{
    game->buttons->font = sfFont_createFromFile("./RSC/font/Ancient.ttf");
    game->buttons->new = sfText_create();
    game->buttons->load = sfText_create();
    game->buttons->sett = sfText_create();
    game->buttons->ex = sfText_create();
    game->buttons->set_ret = sfText_create();
    game->buttons->music = sfText_create();
    game->buttons->on = sfText_create();
    game->buttons->off = sfText_create();
}

void my_text_pos_two(game_t *game)
{
    game->buttons->six.x = 440;
    game->buttons->six.y = 385;
    game->buttons->seven.x = 430;
    game->buttons->seven.y = 498;
    game->buttons->eight.x = 470;
    game->buttons->eight.y = 728;
    game->buttons->pos_on.x = 590;
    game->buttons->pos_on.y = 385;
}

void my_text_pos_one(game_t *game)
{
    game->buttons->one.x = 440;
    game->buttons->one.y = 385;
    game->buttons->two.x = 430;
    game->buttons->two.y = 498;
    game->buttons->three.x = 460;
    game->buttons->three.y = 614;
    game->buttons->four.x = 490;
    game->buttons->four.y = 728;
    game->buttons->five.x = 430;
    game->buttons->five.y = 728;
    my_text_pos_two(game);
}

void my_game_init_enemy(game_t *game)
{
    game->enemy->enemy_rect.top = 0;
    game->enemy->enemy_rect.left = 0;
    game->enemy->enemy_rect.width = 96;
    game->enemy->enemy_rect.height = 96;
    game->enemy->enemy_rect2.top = 0;
    game->enemy->enemy_rect2.left = 768;
    game->enemy->enemy_rect2.width = 96;
    game->enemy->enemy_rect2.height = 96;
    game->enemy->enemy_pos.x = 1200;
    game->enemy->enemy_pos.y = 300;
    game->enemy->life = 100;
}
