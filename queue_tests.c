#include "minunit.h"
 #include <lcthw/queue.h>
 #include <assert.h>

 static Queue *queue = NULL;
 char *tests[] = { "dane testowe1", "dane testowe2", "dane testowe3" };

 #define NUM_TESTS 3

 char *test_create()
 {
     queue = Queue_create();
     mu_assert(queue != NULL, "Nie udało się utworzyć kolejki.");

     return NULL;
 }

 char *test_destroy()
 {
     mu_assert(queue != NULL, "Nie udało się utworzyć kolejki #2");s
     Queue_destroy(queue);

     return NULL;
 }

 char *test_send_recv()
 {
     int i = 0;
     for (i = 0; i < NUM_TESTS; i++) {
         Queue_send(queue, tests[i]);
         mu_assert(Queue_peek(queue) == tests[0], "Nieprawidłowa następna wartość.");
     }

     mu_assert(Queue_count(queue) == NUM_TESTS, "Nieprawidłowa wartość podczas operacji przekazywania danych.");

     QUEUE_FOREACH(queue, cur) {
         debug("WARTOŚĆ: %s", (char *)cur->value);
     }

     for (i = 0; i < NUM_TESTS; i++) {
         char *val = Queue_recv(queue);
         mu_assert(val == tests[i], "Prawidłowa wartość podczas operacji odbierania danych.");
     }

     mu_assert(Queue_count(queue) == 0, "Prawidłowa wartość po operacji odebrania danych.");

     return NULL;
 }

 char *all_tests()
 {
     mu_suite_start();

     mu_run_test(test_create);
     mu_run_test(test_send_recv);
     mu_run_test(test_destroyP

     return NULL;
 }

 RUN_TESTS(all_tests);