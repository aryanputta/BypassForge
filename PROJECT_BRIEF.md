# Project Brief

Project: BypassForge
Gap: Socket-based student projects hide the queue ownership and backpressure mechanics that dominate kernel-bypass systems.
Stack: C11, bounded lock-free-style ring buffer design, deterministic test harness
Data: synthetic packet descriptors generated in-process

Build:
1. Implement a fixed-size ring buffer for packet descriptors.
2. Enqueue and dequeue bursts to model packet forwarding.
3. Measure drop counts and queue occupancy under bounded capacity.

Benchmark against: naive unbounded queue assumptions
Success: forwarder demonstrates bounded capacity, explicit drop behavior, and deterministic totals

