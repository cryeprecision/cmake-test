#ifndef EAE11366_8152_46AD_A1F0_50B9A50B43E7
#define EAE11366_8152_46AD_A1F0_50B9A50B43E7

#include <cmake-test/bar.h>
#include <cmake-test/foo.h>

namespace baz {
auto get_baz() -> int {
    return ::foo::get_foo() + ::bar::get_bar();
}
}  // namespace baz

#endif /* EAE11366_8152_46AD_A1F0_50B9A50B43E7 */
