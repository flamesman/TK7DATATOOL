////////////////////////////////////
////// Auto-generated offsets //////
//////   by Malik R. Booker  ///////
////////////////////////////////////

#pragma once

#include <vector>

namespace Offsets
{    
    // MemoryAddressOffsets
    std::vector<unsigned int> player_data_pointer_offset = { 0x034FE008, 0x8 };
    unsigned int p2_data_offset = 0x77A0;
    unsigned int rollback_frame_offset = 0x1E490;
    unsigned int p2_end_block_offset = 0xD0;
    unsigned int movelist_size = 2000000;
    unsigned int expected_module_address = 0x140000000;
    
    // GameDataAddress
    unsigned int frame_count = 0xA70;
    unsigned int facing = 0x148C;
    unsigned int timer_in_frames = 0x1A158;
    
    // EndBlockPlayerDataAddress
    unsigned int round_wins = 0x1BA6C;
    unsigned int display_combo_counter = 0x1A200;
    unsigned int display_combo_damage = 0x1A1D8;
    unsigned int display_juggle_damage = 0x1A1DC;
    unsigned int total_attacks_made = 0x19B5C;
    unsigned int total_moves_blocked = 0x19B5C;
    
    // PlayerDataAddress
    unsigned int move_timer = 0x1F0;
    unsigned int move_id = 0x350;
    unsigned int recovery = 0x39C;
    unsigned int hit_outcome = 0x3D8;
    unsigned int attack_type = 0x329;
    unsigned int simple_move_state = 0x428;
    unsigned int stun_type = 0x42C;
    unsigned int throw_tech = 0x450;
    unsigned int complex_move_state = 0x470;
    unsigned int power_crush = 0x6C4;
    unsigned int jump_flags = 0x756;
    unsigned int cancel_window = 0x788;
    unsigned int damage_taken = 0x93C;
    unsigned int input_attack = 0x1A0C;
    unsigned int input_direction = 0xD9C;
    unsigned int attack_startup = 0x76E0;
    unsigned int attack_startup_end = 0x76E4;
    unsigned int char_id = 0xDC;
    unsigned int current_side = 0x123C;
    unsigned int distance = 0x1410;
    unsigned int face = 0x148C;
    unsigned int throw_flag = 0x0;
    unsigned int attack_damage = 0x2FC;
    unsigned int x = 0xE70;
    unsigned int y = 0xE74;
    unsigned int z = 0xE78;
    unsigned int hitbox1 = 0xC0C;
    unsigned int hitbox2 = 0xC10;
    unsigned int hitbox3 = 0xC14;
    unsigned int hitbox4 = 0xC18;
    unsigned int hitbox5 = 0xC1C;
    unsigned int activebox_x = 0x1060;
    unsigned int activebox_y = 0x1064;
    unsigned int activebox_z = 0x1068;
    unsigned int health_percent = 0x11E8;
    unsigned int movelist_to_use = 0x1208;
    unsigned int input_counter = 0x15B8;
    unsigned int rage_flag = 0x99C;
    unsigned int mystery_state = 0x990;
    unsigned int juggle_height = 0x11D8;
    
    // NonPlayerDataAddresses
    std::vector<unsigned int> P1_Movelist = { 0x034E6720, 0x2E8 };
    std::vector<unsigned int> P2_Movelist = { 0x034E9D40, 0x2E8 };
    std::vector<unsigned int> OPPONENT_NAME = { 0x034D0520, 0x0, 0x8, 0x11C };
    std::vector<unsigned int> OPPONENT_SIDE = { 0x034D0520, 0x0, 0x8, 0x78 };
    std::vector<unsigned int> P1_CHAR_SELECT = { 0x033B4E68, 0x80, 0x3CC };
    std::vector<unsigned int> P2_CHAR_SELECT = { 0x033B4E68, 0x80, 0x584 };
    std::vector<unsigned int> STAGE_SELECT = { 0x033B4E68, 0x80, 0x78 };
    std::vector<unsigned int> WARMUP_PLAYER_NAME1 = { 0x033B4408, 0x50, 0x0 };
    std::vector<int> WARMUP_PLAYER_WINS1 = { 0x033B4408, 0x50, -0x34 };
    std::vector<unsigned int> WARMUP_PLAYER_NAME2 = { 0x033B4408, 0x50, 0x140 };
    std::vector<unsigned int> WARMUP_PLAYER_WINS2 = { 0x033B4408, 0x50, 0x10C };
    unsigned int P1_MOVE_ID_NORB = 0x034D3154;
    unsigned int P2_MOVE_ID_NORB = 0x034E3A04;
};
