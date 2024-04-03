#ifndef MERGE_H
#define MERGE_H

#include "sequence.h"

template <typename Key, typename Info>
Sequence<Key, Info> merge(const Sequence<Key, Info>& s1, int start1, int step1,
                          const Sequence<Key, Info>& s2, int start2, int step2,
                          int limit) {}

#endif
