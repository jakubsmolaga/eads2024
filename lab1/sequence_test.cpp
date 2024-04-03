#include "sequence.h"

#include <cassert>
#include <string>

void test1() {
  using Seq = Sequence<int, std::string>;
  using Ele = Seq::Element;
  const auto& ele1 = Ele{1, "apple"};
  auto&& ele2 = Ele{2, "orange"};
  auto&& ele3 = Ele{3, "banana"};
  // create new sequence
  auto s = Seq();
  assert(s.empty() == true);
  assert(s.size() == 0);
  // push first element
  auto ref = s.push_front(ele1);
  assert(ref == ele1);
  assert(ref.key == 1);
  assert(ref.info == "apple");
  assert(s.size() == 1);
  assert(s.empty() == false);
  assert(s.front().key == 1);
  assert(s.front().info == "apple");
  assert(s.back().key == 1);
  assert(s.back().info == "apple");
  ref = s.push_front({2, "banana"});
  assert(ref.key == 2);
  assert(ref.info == "banana");
  assert(s.size() == 2);
  assert(s.empty() == false);
  assert(s.front().key == 2);
  assert(s.front().info == "banana");
  assert(s.back().key == 1);
  assert(s.back().info == "apple");
  ref = s.push_back({3, "orange"});
  assert(ref.key == 3);
  assert(ref.info == "orange");
  assert(s.size() == 3);
  assert(s.empty() == false);
  assert(s.front().key == 2);
  assert(s.front().info == "banana");
  assert(s.back().key == 3);
  assert(s.back().info == "orange");
}

int main() {
  test1();
  return 0;
}
