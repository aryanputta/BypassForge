#ifndef RING_BUFFER_H
#define RING_BUFFER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#define RING_CAPACITY 16

typedef struct {
    uint32_t id;
    uint16_t length;
} packet_t;

typedef struct {
    packet_t entries[RING_CAPACITY];
    size_t head;
    size_t tail;
    size_t size;
} ring_buffer_t;

static inline void ring_init(ring_buffer_t *ring) {
    ring->head = 0;
    ring->tail = 0;
    ring->size = 0;
}

static inline bool ring_enqueue(ring_buffer_t *ring, packet_t packet) {
    if (ring->size == RING_CAPACITY) {
        return false;
    }
    ring->entries[ring->tail] = packet;
    ring->tail = (ring->tail + 1) % RING_CAPACITY;
    ring->size += 1;
    return true;
}

static inline bool ring_dequeue(ring_buffer_t *ring, packet_t *packet) {
    if (ring->size == 0) {
        return false;
    }
    *packet = ring->entries[ring->head];
    ring->head = (ring->head + 1) % RING_CAPACITY;
    ring->size -= 1;
    return true;
}

#endif

