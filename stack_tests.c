 #include "minunit.h"
 #include <lcthw/stack.h>
 #include <assert.h>

 static Stack *stack = NULL;
 char *tests[] = { "dane testowe1", "dane testowe2", "dane testowe3" };

 #define NUM_TESTS 3

 char *test_create()
 {
     stack = Stack_create();
     mu_assert(stack != NULL, "Nie udało się utworzyć stosu.");

     return NULL;
 }

 char *test_destroy()
 {
     mu_assert(stack != NULL, "Nie udało się utworzyć stosu #2");
     Stack_destroy(stack);

     return NULL;
 }

 char *test_push_pop()
 {
     int i = 0;
     for (i = 0; i < NUM_TESTS; i++) {
         Stack_push(stack, tests[i]);
         mu_assert(Stack_peek(stack) == tests[i], "Nieprawidłowa następna wartość.");
     }

     mu_assert(Stack_count(stack) == NUM_TESTS, "Nieprawidłowa wartość podczas operacji wstawiania danych.");

     STACK_FOREACH(stack, cur) {
         debug("WARTOŚĆ: %s", (char *)cur->value);
     }

     for (i = NUM_TESTS - 1; i >= 0; i--) {
         char *val = Stack_pop(stack);
         mu_assert(val == tests[i], "Nieprawidłowa wartość podczas operacji usuwania danych.");
     }

     mu_assert(Stack_count(stack) == 0, "Nieprawidłowa wartość po operacji usunięcia danych.");

     return NULL;
 }

 char *all_tests()
 {
     mu_suite_start();

     mu_run_test(test_create);
     mu_run_test(test_push_pop);
     mu_run_test(test_destroy);

     return NULL;
 }

 RUN_TESTS(all_tests);