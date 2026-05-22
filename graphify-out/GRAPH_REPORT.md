# Graph Report - .  (2026-05-22)

## Corpus Check
- 2 files · ~398 words
- Verdict: corpus is large enough that graph structure adds value.

## Summary
- 6 nodes · 7 edges · 2 communities detected
- Extraction: 57% EXTRACTED · 43% INFERRED · 0% AMBIGUOUS · INFERRED: 3 edges (avg confidence: 0.8)
- Token cost: 0 input · 0 output

## Community Hubs (Navigation)
- [[_COMMUNITY_Community 0|Community 0]]
- [[_COMMUNITY_Community 1|Community 1]]

## God Nodes (most connected - your core abstractions)
1. `main()` - 4 edges
2. `ring_init()` - 2 edges
3. `ring_enqueue()` - 2 edges
4. `ring_dequeue()` - 2 edges

## Surprising Connections (you probably didn't know these)
- `main()` --calls--> `ring_enqueue()`  [INFERRED]
  src/main.c → include/ring_buffer.h
- `main()` --calls--> `ring_dequeue()`  [INFERRED]
  src/main.c → include/ring_buffer.h
- `main()` --calls--> `ring_init()`  [INFERRED]
  src/main.c → include/ring_buffer.h

## Communities

### Community 0 - "Community 0"
Cohesion: 0.67
Nodes (2): ring_dequeue(), ring_enqueue()

### Community 1 - "Community 1"
Cohesion: 0.67
Nodes (2): main(), ring_init()

## Suggested Questions
_Questions this graph is uniquely positioned to answer:_

- **Why does `main()` connect `Community 1` to `Community 0`?**
  _High betweenness centrality (0.550) - this node is a cross-community bridge._
- **Why does `ring_init()` connect `Community 1` to `Community 0`?**
  _High betweenness centrality (0.067) - this node is a cross-community bridge._
- **Why does `ring_enqueue()` connect `Community 0` to `Community 1`?**
  _High betweenness centrality (0.067) - this node is a cross-community bridge._
- **Are the 3 inferred relationships involving `main()` (e.g. with `ring_init()` and `ring_enqueue()`) actually correct?**
  _`main()` has 3 INFERRED edges - model-reasoned connections that need verification._