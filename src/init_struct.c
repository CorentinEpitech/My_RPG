/*
** EPITECH PROJECT, 2019
** rpg
** File description:
** phasme
*/

#include "../include/my_rpg.h"



void my_game_init_chara(game_t *game)
{
    game->chara->rect_left.top = 0;
    game->chara->rect_left.left = 0;
    game->chara->rect_left.width = 80;
    game->chara->rect_left.height = 80;
    game->chara->status = 0;
    game->chara->pos.x = 800;
    game->chara->pos.y = 775;
    game->chara->rect_up.top = 0;
    game->chara->rect_up.left = 0;
    game->chara->rect_up.width = 80;
    game->chara->rect_up.height = 80;
    game->chara->life = 100;
    game->chara->magic_point = 100;
    game->map->Cmap = sfImage_createFromFile(IMG_COL);
}

void my_game_init_buttons_menu_pause(game_t *game)
{
    game->menu_pause->resume.x = 754;
    game->menu_pause->resume.y = 380;
    game->menu_pause->save.x = 754;
    game->menu_pause->save.y = 493;
    game->menu_pause->settings.x = 754;
    game->menu_pause->settings.y = 610;
    game->menu_pause->return_menu.x = 754;
    game->menu_pause->return_menu.y = 729;
    game->menu_pause->help.x = 754;
    game->menu_pause->help.y = 797;

}

void my_game_init_buttons(game_t *game)
{
    game->buttons->new_game.x = 345;
    game->buttons->new_game.y = 385;
    game->buttons->load_game.x = 345;
    game->buttons->load_game.y = 498;
    game->buttons->settings.x = 345;
    game->buttons->settings.y = 614;
    game->buttons->exit.x = 345;
    game->buttons->exit.y = 728;
    game->buttons->settings_return.x = 345;
    game->buttons->settings_return.y = 728;
    my_game_init_buttons_menu_pause(game);
    my_text_init_struct(game);
}

void my_game_init(game_t *game)
{
    sfVideoMode video_mode = {1920, 1080, 64};
    game->windows = sfRenderWindow_create(video_mode, "my_rpg",
    sfDefaultStyle, NULL);
    sfRenderWindow_setFramerateLimit(game->windows, 60);
    alloc_struct(game);
    my_text_pos_one(game);
    my_game_init_fight(game);
    my_game_init_fx(game);
    my_game_init_menu(game);
    my_game_init_mouse(game);
    my_game_init_buttons(game);
    my_game_init_chara(game);
    my_game_init_inventory(game);
    my_game_init_enemy(game);
}

void alloc_struct(game_t *game)
{
    game->fx = malloc(sizeof(fx_t));
    game->chara = malloc(sizeof(chara_t));
    game->menu = malloc(sizeof(menu_t));
    game->menu_pause = malloc(sizeof(menu_pause_t));
    game->scene = malloc(sizeof(scene_t));
    game->mouse = malloc(sizeof(mouse_t));
    game->map = malloc(sizeof(map_t));
    game->buttons = malloc(sizeof(buttons_t));
    game->fight = malloc(sizeof(fight_t));
    game->pj = malloc(sizeof(pnj_t));
    game->inventory = malloc(sizeof(inventory_t));
    game->house = malloc(sizeof(house_t));
    game->enemy = malloc(sizeof(enemy_t));
}
