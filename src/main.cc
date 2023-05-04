#if 1
#ifndef USE_IN_SOURCE_FILE
#define USE_IN_SOURCE_FILE
#endif
#endif

#ifdef USE_IN_SOURCE_FILE

#include <cassert>
#include <cmake-test/baz.h>

auto main(int argc, const char **argv) -> int {
    assert(baz::get_baz() == 3);
}

#else

auto main(int argc, const char **argv) -> int {
    return 0;
}

#endif
