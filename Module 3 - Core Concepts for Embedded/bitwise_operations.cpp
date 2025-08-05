#include <iostream>
#include <bitset>

int main() {

    // ----------------------------------------------------------------
    std::cout << "Block 1" << std::endl;

    unsigned char register_state = 0b10010001;

    std::cout << "register_state = " << std::bitset<8>(register_state) << std::endl;
  
    // ----------------------------------------------------------------

    std::cout << "Block 2" << std::endl;

    unsigned char mask_on = (1 << 3);
    std::cout << "mask_on = " << std::bitset<8>(mask_on) << std::endl;

    std::cout << "register_state |= mask_on = " << std::bitset<8>(register_state |= mask_on) << std::endl;
    

    // ----------------------------------------------------------------

    std::cout << "Block 3" << std::endl;

    unsigned char mask_off = (1 << 0);
    std::cout << "mask_off = " << std::bitset<8>(mask_off) << std::endl;
    
    std::cout << "register_state &= ~mask_off = " << std::bitset<8>(register_state &= ~mask_off) << std::endl;


    // ----------------------------------------------------------------

    std::cout << "Block 4" << std::endl;

    unsigned char mask_toggle = (1 << 7);
    std::cout << "mask_toggle = " << std::bitset<8>(mask_toggle) << std::endl;

    std::cout << "register_state ^= mask_toggle = " << std::bitset<8>(register_state ^= mask_toggle) << std::endl;


    // ----------------------------------------------------------------

    std::cout << "Block 5" << std::endl;

    unsigned char mask_check = (1 << 3);
    std::cout << "mask_check = " << std::bitset<8>(mask_check) << std::endl;
    std::cout << "register_state = " << std::bitset<8>(register_state) << std::endl;


    if ((register_state & mask_check) != 0)
        std::cout << "Bit 3 is SET" << std::endl;
    else 
        std::cout << "Bit 3 is NOT SET" << std::endl;
  
    // ----------------------------------------------------------------

    return 0;
}