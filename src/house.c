/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2018
** File description:
** house
*/

#include "my_rpg.h"

void scene_house(game_t *game)
{
    sfRenderWindow_drawSprite(game->windows, game->house->house_sprite, NULL);
    if (game->quest_status == 1)
        sfRenderWindow_drawSprite(game->windows, game->house->ennemy_sprite,
            NULL);
    check_keyboard(game);
    set_player(game);
    if (game->chara->pos.x + 20 >= 700 && game->chara->pos.x + 20 <= 1000 &&
         game->quest_status == 1) {
        if (game->chara->pos.y - 20 >= 600 && game->chara->pos.y - 20 <= 900 &&
            game->quest_status == 1) {
            game->scene->game_status = 5;
        }
    }
    if (game->mouse->keyboard_escape == 1)
        my_menu_pause(game);
    if (game->mouse->keyboard_inventory == 1)
        scene_inventory(game);
}

void int_house(game_t *game)
{
    sfVector2f scale;
    scale.x = 3;
    scale.y = 3;

    game->house->house_texture = sfTexture_createFromFile(HOUSE, NULL);
    game->house->house_sprite = sfSprite_create();
    sfSprite_setTexture(game->house->house_sprite, game->house->house_texture,
         sfTrue);
    game->house->Chouse = sfImage_createFromFile(HOUSE_COLLISION);
    game->house->ennemy_position.x = 100;
    game->house->ennemy_position.y = 600;
    game->house->ennemy_texture = sfTexture_createFromFile(ENNEMY, NULL);
    game->house->ennemy_sprite = sfSprite_create();
    sfSprite_setTexture(game->house->ennemy_sprite, game->house->ennemy_texture,
         sfTrue);
    sfSprite_setPosition(game->house->ennemy_sprite,
        game->house->ennemy_position);
    sfSprite_scale(game->house->ennemy_sprite, scale);
}
