#ifndef AES_H_
#define AES_H_

// includes
#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

// aes State struct
typedef struct aes_state {
    uint8_t state_arr[4][4];
} aes_state;

// Applies S-box substitution to all bytes in state
void subBytes(aes_state *state);

// Performs circular left shifts on state rows
void shiftRows(aes_state *state);

// Converts plaintext array to 4x4 state matrix (column-major order)
void plain_text_to_state(aes_state *state, uint8_t plain_bytes[]);

// to log the state block
void logState(aes_state *state);

#endif
