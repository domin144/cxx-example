/*
 * SPDX-FileCopyrightText: 2024 Dominik Wójt <domin144@o2.pl>
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <hello/hello.h>

#include <gtest/gtest.h>

TEST(hello_test, test_0)
{
    hello::say_hello();
    EXPECT_EQ(2 + 2, 4);
}
