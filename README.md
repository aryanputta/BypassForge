# BypassForge

BypassForge is a kernel-bypass-oriented packet forwarder skeleton in C. It does not depend on DPDK directly, but it models the core local mechanics that matter before the real port: bounded rings, zero-copy-style ownership transfer, and explicit enqueue/dequeue pressure.

## Gap

Many student networking projects stop at socket APIs. That hides the memory movement, batching, and queue-pressure logic that dominates high-performance data planes.

Gap statement:

> Typical networking projects validate packet movement through kernel APIs, but fail to model the queue ownership, batching, and backpressure behavior that kernel-bypass systems rely on.

## Target Alignment

- NVIDIA: DPDK and BlueField-style data-plane reasoning
- Apple: low-level systems discipline in C
- SpaceX: explicit queue ownership and bounded-latency control loops

## Quickstart

```bash
make
make test
```

