# cmake-test

If `USE_IN_SOURCE_FILE` is defined, the header `baz.h` is included in a source file. This makes the
include-errors in `baz.h` go away and when writing `#include <cmake-test/bar.h>` inside `foo.h`
autocomplete is working correctly.
