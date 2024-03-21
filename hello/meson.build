hello_includes = include_directories('include')
subdir('include')

hello_sources = ['hello.cpp']

hello_lib = library(
    'hello',
    hello_sources,
    include_directories : hello_includes)

hello_dep = declare_dependency(
    link_with : hello_lib,
    include_directories : hello_includes)