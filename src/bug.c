#include "bug.h"

volatile uint8_t BUF[16];

int sum_u8(const uint8_t* p, size_t n){
    int s = 0;
    // FIX: Zmiana '<=' na '<'. Iterujemy od 0 do n-1.
    for(size_t i = 0; i < n; i++){
        s += p[i];
    }
    return s;
}

void write_tail(size_t idx, uint8_t v){
    // FIX: Dodano zabezpieczenie przed zapisem poza tablicę (rozmiar 16)
    if (idx >= 16) {
        return; 
    }
    uint8_t* q = (uint8_t*)BUF;
    q[idx] = v;
}