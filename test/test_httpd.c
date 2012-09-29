#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <check.h>

#include "httpd.h"

START_TEST (sanity_check) 
{
  fail_unless(1 == 1, "Something in the build is not set up correctly");
}
END_TEST

Suite *httpd_suite(void) {
  Suite *s = suite_create ("NCSA HTTPD 2.0");
  TCase *tc_core = tcase_create ("Core");
  tcase_add_test (tc_core, sanity_check);
  suite_add_tcase (s, tc_core);
  return s;
}

int main(void) {
  int number_failed;
  Suite *s = httpd_suite ();
  SRunner *sr = srunner_create (s);
  srunner_run_all (sr, CK_NORMAL);
  number_failed = srunner_ntests_failed (sr);
  srunner_free (sr);
  return (number_failed == 0) ? EXIT_SUCCESS : EXIT_FAILURE;
}
