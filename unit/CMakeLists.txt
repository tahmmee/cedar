set(TEST_DIR ${PROJECT_SOURCE_DIR}/unit)
include_directories(BEFORE ${FORESTDB_REPO}/src)
include_directories(BEFORE /usr/local/include)
link_directories(/usr/local/lib)

add_executable(avl_test
  ${TEST_DIR}/avl_test.c
  ${FORESTDB_REPO}/src/avltree.cc)
target_link_libraries(avl_test cmocka)

add_test(avl_test avl_test)
