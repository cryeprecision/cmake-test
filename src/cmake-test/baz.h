#pragma once

#include <cmake-test/bar.h>
#include <cmake-test/foo.h>

namespace baz {
auto get_baz() -> int {
    return ::foo::get_foo() + ::bar::get_bar();
}
}  // namespace baz
