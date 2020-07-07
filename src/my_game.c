/*
** EPITECH PROJECT, 2019
** my_rpg_2018
** File description:
** game
*/

#include "my_rpg.h"

void my_sprite_game(game_t *game)
{
    game->map->Smap = sfSprite_create();
    game->inventory->Sinventory = sfSprite_create();
    game->inventory->Tinventory = sfTexture_createFromFile(
        "./RSC/inventory.png", NULL);
    game->map->Tmap = sfTexture_createFromFile("./RSC/main_map.png", NULL);
    sfSprite_setTexture(game->map->Smap, game->map->Tmap, sfTrue);
    game->fx->Ssmoke = sfSprite_create();
    game->fx->Ssmoke2 = sfSprite_create();
    game->fx->Sshadow = sfSprite_create();
    game->fx->Tsmoke = sfTexture_createFromFile("./RSC/smoke.png", NULL);
    game->fx->Tshadow = sfTexture_createFromFile("./RSC/shadow.png", NULL);
    sfSprite_setTexture(game->fx->Ssmoke, game->fx->Tsmoke, sfTrue);
    sfSprite_setTexture(game->fx->Ssmoke2, game->fx->Tsmoke, sfTrue);
    sfSprite_setTexture(game->fx->Sshadow, game->fx->Tshadow, sfTrue);
    sfSprite_setTexture(game->inventory->Sinventory,
        game->inventory->Tinventory, sfTrue);
    game->fx->clock = sfClock_create();
}

void my_game(game_t *game)
{
    game->fx->pos_shadow.x = game->chara->pos.x + 18;
    game->fx->pos_shadow.y = game->chara->pos.y + 45;
    sfSprite_setPosition(game->map->Smap, game->menu->pos_menu);
    sfRenderWindow_drawSprite(game->windows, game->map->Smap, NULL);
    sfSprite_setPosition(game->pj->pnj_foret, game->pj->v_pnj_foret);
    sfRenderWindow_drawSprite(game->windows, game->pj->pnj_foret, NULL);
    sfSprite_setPosition(game->fx->Ssmoke, game->fx->pos_smoke);
    sfSprite_setPosition(game->fx->Ssmoke2, game->fx->pos_smoke2);
    sfRenderWindow_drawSprite(game->windows, game->fx->Ssmoke, NULL);
    sfRenderWindow_drawSprite(game->windows, game->fx->Ssmoke2, NULL);
    move_smoke(game);
    sfSprite_setTextureRect(game->fx->Ssmoke, game->fx->rect_smoke);
    sfSprite_setTextureRect(game->fx->Ssmoke2, game->fx->rect_smoke);
    sfSprite_setPosition(game->fx->Sshadow, game->fx->pos_shadow);
    sfRenderWindow_drawSprite(game->windows, game->fx->Sshadow, NULL);
    pnjpos(game);
    check_keyboard(game);
    set_player(game);
    expnj(game);
    check_keyboard2(game);
}

void check_keyboard2(game_t *game)
{
    if (game->mouse->keyboard_escape == 1)
        my_menu_pause(game);
    if (game->mouse->keyboard_inventory == 1)
        scene_inventory(game);
}

void move_smoke(game_t *game)
{
    game->fx->time = sfClock_getElapsedTime(game->fx->clock);
    game->fx->seconds = game->fx->time.microseconds / 75000.0;
    if (game->fx->seconds > 1.0) {
        move_rect(game->fx->rect_smoke, 16, 128, game);
        sfClock_restart(game->fx->clock);
    }
}

void move_rect(sfIntRect rect, int offset, int max_value, game_t *game)
{
    game->fx->rect_smoke.left += offset;
    if (game->fx->rect_smoke.left >= max_value)
        game->fx->rect_smoke.left = 0;
}
