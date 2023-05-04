#include <cassert>

#if 1

#include <cmake-test/baz.h>

auto main(int argc, const char **argv) -> int {
    assert(baz::get_baz() == 3);
}

#else

auto main(int argc, const char **argv) -> int {
    return 0;
}

#endif
