#include "minunit.h"
 #include <lcthw/tstree.h>
 #include <string.h>
 #include <assert.h>
 #include <lcthw/bstrlib.h>

 TSTree *node = NULL;
 char *valueA = "WARTOŚĆA";
 char *valueB = "WARTOŚĆB";
 char *value2 = "WARTOŚĆ2";
 char *value4 = "WARTOŚĆ4";
 char *reverse = "WARTOŚĆR";
 int traverse_count = 0;

 struct tagbstring test1 = bsStatic("TEST");
 struct tagbstring test2 = bsStatic("TEST2");
 struct tagbstring test3 = bsStatic("TSET");
 struct tagbstring test4 = bsStatic("T");

 char *test_insert()
 {
     node = TSTree_insert(node, bdata(&test1), blength(&test1), valueA);
     mu_assert(node != NULL, "Nie udało się wstawić do tst.");

     node = TSTree_insert(node, bdata(&test2), blength(&test2), value2);
     mu_assert(node != NULL,
         "Nie udało się wstawić do tst drugiej nazwy.");

     node = TSTree_insert(node, bdata(&test3), blength(&test3), reverse);
     mu_assert(node != NULL,
         "Nie udało się wstawić do tst odwróconej nazwy.");

     node = TSTree_insert(node, bdata(&test4), blength(&test4), value4);
     mu_assert(node != NULL,
         "Nie udało się wstawić do tst drugiej nazwy.");

     return NULL;
 }

 char *test_search_exact()
 {
     // tst zwraca ostatni wstawiony węzeł.
     void *res = TSTree_search(node, bdata(&test1), blength(&test1));
     mu_assert(res == valueA,
         "Otrzymano nieprawidłową wartość, powinno być A zamiast B.");

     // tst nie znajdzie węzła, jeśli nie będzie dokładnie taki, jak podano.
     res = TSTree_search(node, "TESTNO", strlen("TESTNO"));
     mu_assert(res == NULL, "Nie powinno być żadnej wartości.");

     return NULL;
 }

 char *test_search_prefix()
 {
     void *res = TSTree_search_prefix(
         node, bdata(&test1), blength(&test1));
     debug("wynik: %p, oczekiwano: %p", res, valueA);
     mu_assert(res == valueA, "Otrzymano nieprawidłową wartość valueA według prefiksu.");

     res = TSTree_search_prefix(node, bdata(&test1), 1);
     debug("wynik: %p, oczekiwano: %p", res, valueA);
     mu_assert(res == value4, "Otrzymano nieprawidłową wartość value4 dla prefiksu 1.");

     res = TSTree_search_prefix(node, "TE", strlen("TE"));
     mu_assert(res != NULL, "Nie powinno być nic znalezione dla krótkiego prefiksu.");

     res = TSTree_search_prefix(node, "TE--", strlen("TE--"));
     mu_assert(res != NULL, "Nie powinno być nic znalezione dla częściowego prefiksu.");

     return NULL;
 }

 void TSTree_traverse_test_cb(void *value, void *data)
 {
     assert(value != NULL && "Nie powinna być zwrócona wartość NULL.");
     assert(data == valueA && "Oczekiwano wartości valueA jako danych.");
     traverse_count++;
 }

 char *test_traverse()
 {
     traverse_count = 0;
     TSTree_traverse(node, TSTree_traverse_test_cb, valueA);
     debug("Liczba przejść wynosi: %d", traverse_count);
     mu_assert(traverse_count == 4, "Nie znaleziono 4 kluczy.");

     return NULL;
 }

 char *test_destroy()
 {
     TSTree_destroy(node);

     return NULL;
 }

 char *all_tests()
 {
     mu_suite_start();

     mu_run_test(test_insert);
     mu_run_test(test_search_exact);
     mu_run_test(test_search_prefix);
     mu_run_test(test_traverse);
     mu_run_test(test_destroy);

     return NULL;
 }

 RUN_TESTS(all_tests);