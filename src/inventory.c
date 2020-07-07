/*
** EPITECH PROJECT, 2019
** rpg
** File description:
** inventory
*/

#include "../include/my_rpg.h"

void scene_inventory(game_t *game)
{
    sfRenderWindow_drawSprite(game->windows,
                              game->inventory->Sinventory, NULL);
    if (game->quest_status == 2)
        sfRenderWindow_drawSprite(game->windows,
                                  game->inventory->golden_apple_sp, NULL);
}

void buttons_resume_inventory(game_t *game)
{
    if (game->mouse->pos_click_x < game->inventory->resume.x + 350 &&
    game->mouse->pos_click_x > game->inventory->resume.x &&
    game->mouse->pos_click_y < game->inventory->resume.y + 53 &&
    game->mouse->pos_click_y > game->inventory->resume.y) {
        game->mouse->keyboard_inventory = 0;
    }
}
