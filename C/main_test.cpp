#include <gtest/gtest.h>
#include "A/index.h"
#include "B/lib.h"


TEST(index, EQ) {
  EXPECT_EQ(1, index());
}


TEST(lib, EQ) {
  EXPECT_EQ(2, lib());
}