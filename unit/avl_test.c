/* -*- Mode: C++; tab-width: 4; c-basic-offset: 4; indent-tabs-mode: nil -*- */
/*
 *     Copyright 2010 Couchbase, Inc
 *
 *   Licensed under the Apache License, Version 2.0 (the "License");
 *   you may not use this file except in compliance with the License.
 *   You may obtain a copy of the License at
 *
 *       http://www.apache.org/licenses/LICENSE-2.0
 *
 *   Unless required by applicable law or agreed to in writing, software
 *   distributed under the License is distributed on an "AS IS" BASIS,
 *   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *   See the License for the specific language governing permissions and
 *   limitations under the License.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <setjmp.h>
#include <cmocka.h>

#include "avltree.h"

/* A test case that does nothing and succeeds. */
static void avl_init_test(void **state) {
    (void) state; /* unused */
    struct avl_tree tree;
    avl_init(&tree, NULL);
}


int main(void) {
    const struct CMUnitTest tests[] = {
        cmocka_unit_test(avl_init_test),
    };
    return cmocka_run_group_tests(tests, NULL, NULL);
}
