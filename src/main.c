#include "aes.h"

int main(int argc, char **argv) {

    /* aes_state struct for the state_arr state block
     *
     */
    aes_state state;

    /* // test log
    fprintf(stdout, "before subBytes: %s\n", str);

    fprintf(stdout, "before subBytes: %s\n", str);
    */

    // test plain byte block
    uint8_t str[17] = "iambatmannnnnnnn\0";

    plain_text_to_state(&state, str);   // unsigned byte block to 2D 4*4 unsigned plaintext blocks
    subBytes(&state);   // substitution of plaintext bytes using S-box
    shiftRows(&state);  // shift rows in column major order

    logState(&state);   // state block log

    return 0;
}
