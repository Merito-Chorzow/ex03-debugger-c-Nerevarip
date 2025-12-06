#include <stdio.h>
#include <stdint.h>
#include "bug.h"

int main(void){
    for(int i=0;i<16;i++) ((uint8_t*)BUF)[i] = (uint8_t)i;

    // FIX: Przekazujemy rozmiar tablicy (16), a nie ostatni indeks.
    // Dzięki temu pętla 'i < n' zadziała poprawnie dla wszystkich elementów.
    int s = sum_u8((const uint8_t*)BUF, 16);
    printf("sum=%d\n", s);

    // To wywołanie teraz nie spowoduje błędu pamięci (zostanie zignorowane przez if)
    write_tail(16, 0xAA);

    puts("done");
    return 0;
}