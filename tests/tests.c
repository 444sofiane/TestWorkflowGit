// test_my_program.c
#include <criterion/criterion.h>
#include "../src/my_program.c"

//generate a test for my_add function

// Test when both inputs are negative
Test(my_add, should_return_negative_4_when_both_inputs_are_negative_2) {
    int result = my_add(-2, -2);
    cr_assert_eq(result, -4);
}

// Test when one input is negative and the other is positive
Test(my_add, should_return_0_when_inputs_are_2_and_negative_2) {
    int result = my_add(2, -2);
    cr_assert_eq(result, 0);
}

// Test when one input is 0 and the other is positive
Test(my_add, should_return_2_when_inputs_are_2_and_0) {
    int result = my_add(2, 0);
    cr_assert_eq(result, 2);
}

// Test when one input is 0 and the other is negative
Test(my_add, should_return_negative_2_when_inputs_are_negative_2_and_0) {
    int result = my_add(-2, 0);
    cr_assert_eq(result, -2);
}

// Test when both inputs are 0
Test(my_add, should_return_0_when_both_inputs_are_0) {
    int result = my_add(0, 0);
    cr_assert_eq(result, 0);
}