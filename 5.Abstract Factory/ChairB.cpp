#include "ChairB.hpp"


#define CHAIR_B_SEAT_WIDTH 4;
#define CHAIR_B_SEAT_LENGTH 6;
#define STEEL 1;

int ChairB::seat_width() {
    return CHAIR_B_SEAT_WIDTH;
}

int ChairB::seat_length() {
    return CHAIR_B_SEAT_LENGTH;
}

int ChairB::material_type()
{
    return STEEL;
}