#include "common.h"

namespace bpftrace {
namespace test {
namespace codegen {

TEST(codegen, call_str)
{
  test("kprobe:f { @x = str(arg0) }",

       NAME);
}

} // namespace codegen
} // namespace test
} // namespace bpftrace
