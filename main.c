// ------------------------
// DERCOPIHTHECIDAE
// main program code
// By micet86
// ------------------------

// ------------------
// Import libraries
// ------------------
#include <gb/gb.h>
#include <stdint.h>
#include <stdio.h>

// ------------------
// Import resources
// ------------------
#include "tiles/greenHillTiles.c"
#include "maps/greenHillMap.c"
#include "tiles/sonicTiles.c"

void main(void)
{
    set_bkg_data(0, 40, greenHillTiles);
    set_bkg_tiles(0, 0, greenHillMapWidth, greenHillMapHeight, greenHillMap);

    SPRITES_8x16;
    
    set_sprite_data(0, 8, sonicTiles);
    set_sprite_tile(0, 0);
    move_sprite(0, 75, 96);
    set_sprite_tile(1, 2);
    move_sprite(1, 75 + 8, 96);
    set_sprite_tile(2, 4);
    move_sprite(2, 75 , 96 + 16);
    set_sprite_tile(3, 6);
    move_sprite(3, 75 + 8 , 96 + 16);
    
    SHOW_SPRITES;

    SHOW_BKG;
    DISPLAY_ON;

    while(1) 
    {
        scroll_bkg(2, 0);
        wait_vbl_done();
    }
}