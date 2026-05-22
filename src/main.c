#include <assert.h>
#include <stdint.h>
#include <stdio.h>

#include "ring_buffer.h"

int main(void) {
    ring_buffer_t ingress;
    packet_t packet;
    uint32_t forwarded = 0;
    uint32_t dropped = 0;

    ring_init(&ingress);

    for (uint32_t id = 0; id < 20; ++id) {
        packet_t next = {.id = id, .length = (uint16_t)(64 + id)};
        if (!ring_enqueue(&ingress, next)) {
            dropped += 1;
        }
    }

    while (ring_dequeue(&ingress, &packet)) {
        forwarded += 1;
    }

    assert(forwarded == RING_CAPACITY);
    assert(dropped == 4);
    printf("forwarded=%u dropped=%u\n", forwarded, dropped);
    return 0;
}
