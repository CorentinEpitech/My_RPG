/*
** EPITECH PROJECT, 2019
** rpg
** File description:
** pnj2
*/

#include "../include/my_rpg.h"

void pnjpos(game_t *game)
{
    game->pj->v_pnj_foret.x = 600;
    game->pj->v_pnj_foret.y = 560;
    game->pj->v_exclamation.x = 580;
    game->pj->v_exclamation.y = 500;
}

void draw_pnj_dial(game_t *game)
{
    if (game->quest_status == 0) {
        while (sfKeyboard_isKeyPressed(sfKeyReturn) != sfTrue) {
            sfRenderWindow_drawSprite(game->windows, game->pj->dial_first_sp,
                                      NULL);
            sfRenderWindow_display(game->windows);
        }
        game->quest_status = 1;
    }
    if (game->quest_status == 2) {
        while (sfKeyboard_isKeyPressed(sfKeyReturn) != sfTrue) {
            sfSprite_setTexture(game->pj->dial_first_sp, game->pj->end_message,
                                sfTrue);
            sfRenderWindow_drawSprite(game->windows, game->pj->dial_first_sp,
                                      NULL);
            sfRenderWindow_display(game->windows);
        }
        game->quest_status = 3;
    }
}

int expnj(game_t *game)
{
    if (game->chara->pos.x + 20 >= 570 && game->chara->pos.x + 20 <= 788 &&
        (game->quest_status == 0 || game->quest_status == 2)) {
        if (game->chara->pos.y - 20 >= 500 && game->chara->pos.y - 20 <= 640 &&
            (game->quest_status == 0 || game->quest_status == 2)) {
            sfSprite_setPosition(game->pj->exclamation,
                                 game->pj->v_exclamation);
            sfText_setPosition(game->pj->press_e, game->pj->text_position);
            sfRenderWindow_drawSprite(game->windows, game->pj->exclamation,
                                      NULL);
            sfRenderWindow_drawText(game->windows, game->pj->press_e, NULL);
            if (sfKeyboard_isKeyPressed(sfKeyE)) {
                draw_pnj_dial(game);
            }
        }
    }
    return (1);
}
