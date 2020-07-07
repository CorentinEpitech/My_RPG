/*
** EPITECH PROJECT, 2019
** rpg
** File description:
** fight
*/

#include "my_rpg.h"

void my_sprite_fight(game_t *game)
{
    game->fight->Tscene = sfTexture_createFromFile(
        "./RSC/fight_scene.png", NULL);
    game->fight->Sscene = sfSprite_create();
    sfSprite_setTexture(game->fight->Sscene, game->fight->Tscene, sfTrue);
    game->fight->Tplayer = sfTexture_createFromFile(
        "./RSC/player_big_idle.png", NULL);
    game->fight->Tplayer_attack = sfTexture_createFromFile(
        "./RSC/player_attack.png", NULL);
    game->fight->Tplayer_attackSP = sfTexture_createFromFile(
        "./RSC/player_attackSP.png", NULL);
    game->fight->Splayer = sfSprite_create();
    game->fight->clock = sfClock_create();
    sfSprite_setTexture(game->fight->Splayer, game->fight->Tplayer, sfTrue);
    sfSprite_setTextureRect(game->fight->Splayer, game->fight->rect_player);
    my_sprite_fight2(game);
}

void my_sprite_fight2(game_t *game)
{
    game->fight->font = sfFont_createFromFile("./RSC/font/DragonForcE.ttf");
    game->fight->text = sfText_create();
    game->fight->text2 = sfText_create();
    game->fight->enemy_text = sfText_create();
    sfText_setString(game->fight->text, "Life : 100");
    sfText_setString(game->fight->text2, "Magic : 100");
    sfText_setString(game->fight->enemy_text, "|\n|  Enemy Life : 100\n|");
    sfText_setFont(game->fight->text, game->fight->font);
    sfText_setFont(game->fight->text2, game->fight->font);
    sfText_setFont(game->fight->enemy_text, game->fight->font);
    sfText_setCharacterSize(game->fight->enemy_text, 40);
    sfText_setCharacterSize(game->fight->text, 40);
    sfText_setCharacterSize(game->fight->text2, 35);
}

void fight_scene(game_t *game)
{
    sfSprite_setPosition(game->fight->Splayer, game->fight->player_pos);
    sfText_setPosition(game->fight->text, game->fight->text_pos);
    sfText_setPosition(game->fight->text2, game->fight->text_pos2);
    sfText_setPosition(game->fight->enemy_text, game->fight->enemy_text_pos);
    draw_fight(game);
    sfRenderWindow_drawSprite(game->windows, game->fight->Splayer, NULL);
    enemy_fight(game);
    if (game->enemy->life <= 0) {
        game->quest_status = 2;
        game->scene->game_status = 6;
    }
    if (game->fight->player_status == 1)
        move_player_attack(game);
    else if (game->fight->player_status == 2)
        move_player_attack2(game);
    else {
        sfSprite_setTexture(game->fight->Splayer, game->fight->Tplayer, sfTrue);
        sfSprite_setTextureRect(game->fight->Splayer, game->fight->rect_player);
        move_player_idle(game);
    }
}

void draw_fight(game_t *game)
{
    sfRenderWindow_drawSprite(game->windows, game->fight->Sscene, NULL);
    sfRenderWindow_drawText(game->windows, game->fight->text, NULL);
    sfRenderWindow_drawText(game->windows, game->fight->text2, NULL);
    sfRenderWindow_drawText(game->windows, game->fight->enemy_text, NULL);
}
