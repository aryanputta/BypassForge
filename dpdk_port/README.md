# DPDK Port Plan

This folder is the transition path from the local bounded-ring model to a real DPDK application.

Next steps:

1. Install DPDK and hugepages on a host with supported NICs.
2. Replace the synthetic packet source with `rte_eth_rx_burst`.
3. Replace the synthetic sink with `rte_eth_tx_burst`.
4. Preserve explicit drop accounting and bounded queue behavior from the current repo.

