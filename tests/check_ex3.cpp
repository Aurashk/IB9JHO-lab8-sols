#define CATCH_CONFIG_MAIN
#include "catch.hpp"

#include <filesystem>

#include "compare_files.hpp"
#include "capture_output.hpp"

void test_text_input(const std::filesystem::path &my_exe, const std::filesystem::path &my_actual, const std::filesystem::path &my_expected)
{
    const std::filesystem::path root = PROJECT_ROOT_DIR;

    const std::filesystem::path cmd = root / "build" / "tests" / my_exe;
    const std::filesystem::path actual = root / "tests" / "IO" / my_actual;
    const std::filesystem::path expected = root / "tests" / "IO" / my_expected;

    REQUIRE_NOTHROW(capture_output(cmd.string(), actual.string()));
    REQUIRE_NOTHROW(compare_files(actual.string(), expected.string()));
}

TEST_CASE("Check ex3", "[compare_output]")
{
    test_text_input("test_ex3", "ex3_actual.txt", "ex3_output.txt");
}

