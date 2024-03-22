# SPDX-FileCopyrightText: 2024 Dominik Wójt <domin144@o2.pl>
#
# SPDX-License-Identifier: Apache-2.0

gtest_dep = dependency('gtest', main : true)

test(
    'hello test',
    executable(
        'hello_test',
        ['hello.cpp'],
        dependencies : [hello_dep, gtest_dep]))
