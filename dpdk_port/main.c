#include <stdint.h>
#include <stdio.h>

#include <rte_ethdev.h>
#include <rte_eal.h>
#include <rte_mbuf.h>

int main(int argc, char **argv) {
    const int eal = rte_eal_init(argc, argv);
    if (eal < 0) {
        return 1;
    }

    printf("DPDK EAL initialized. Replace this scaffold with RX/TX burst logic.\n");
    return 0;
}

