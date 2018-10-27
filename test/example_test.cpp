#include "example/example.hpp"
#include <catch.hpp>
#include <spdlog/spdlog.h>

TEST_CASE("Times should return the multiplication", "[times]")
{
    spdlog::set_level(spdlog::level::debug);
    REQUIRE(example::times(2, 3) == 6);
    REQUIRE(example::times(4, -1) == -4);
}
