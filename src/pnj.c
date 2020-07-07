/*
** EPITECH PROJECT, 2019
** Epitech
** File description:
** PNJ
*/
#include "../include/my_rpg.h"

void init_pnj(game_t *game)
{
    game->pj->pnj_foret = sfSprite_create();
    game->pj->t_pnj_foret = sfTexture_createFromFile("RSC/PNJ/PNJ.Foret.png",
                                                     NULL);
    sfSprite_setTexture(game->pj->pnj_foret, game->pj->t_pnj_foret, sfTrue);
    game->pj->exclamation = sfSprite_create();
    game->pj->t_exclamation = sfTexture_createFromFile(
        "RSC/PNJ/exclamation.png", NULL);
    sfSprite_setTexture(game->pj->exclamation, game->pj->t_exclamation, sfTrue);
    game->pj->press_e = sfText_create();
    sfText_setString(game->pj->press_e, "Press E to start the quest");
    sfText_setFont(game->pj->press_e, game->buttons->font);
    sfText_setCharacterSize(game->pj->press_e, 40);
    game->pj->text_position.x = 200;
    game->pj->text_position.y = 1020;
    game->pj->dial_position.x = 0;
    game->pj->dial_position.y = 500;
    init_pnj2(game);
}

void init_pnj2(game_t *game)
{
    game->inventory->apple_position.x = 1010;
    game->inventory->apple_position.y = 150;
    game->pj->dial_first_te = sfTexture_createFromFile(PNJ_DIAL_1, NULL);
    game->pj->dial_first_sp = sfSprite_create();
    sfSprite_setTexture(game->pj->dial_first_sp, game->pj->dial_first_te,
                        sfTrue);
    sfSprite_setPosition(game->pj->dial_first_sp, game->pj->dial_position);
    game->inventory->golden_apple_sp = sfSprite_create();
    game->inventory->golden_apple_tx = sfTexture_createFromFile(GOLDEN_APPLE,
                                                                NULL);
    game->pj->end_message = sfTexture_createFromFile(END_MESSAGE, NULL);
    sfSprite_setTexture(game->inventory->golden_apple_sp,
                        game->inventory->golden_apple_tx, sfTrue);
    sfSprite_setPosition(game->inventory->golden_apple_sp,
                         game->inventory->apple_position);
}

void scale(game_t *game)
{
    sfVector2f sfvector;
    sfvector.x = 0.62;
    sfvector.y = 0.62;
    sfSprite_scale(game->pj->pnj_foret, sfvector);

    sfVector2f sfvector2;
    sfvector2.x = 0.25;
    sfvector2.y = 0.25;
    sfSprite_scale(game->pj->exclamation, sfvector2);
}
