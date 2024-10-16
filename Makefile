clean:
	@rm -rf 1_uncaught_divide_by_zero
	@rm -rf 2_uncaught_out_of_bounds
	@rm -rf 3_uncaught_stack_overflow
	@rm -rf 4_check_and_catch_divide_by_zero
	@rm -rf 5_catch_all_exceptions
	@rm -rf 6_catch_all_exceptions_improved
	@rm -rf 7_cpp_standard_exceptions

1: clean
	g++ --std=c++11 1_uncaught_divide_by_zero.cpp -o 1_uncaught_divide_by_zero
	./1_uncaught_divide_by_zero

2: clean
	g++ --std=c++11 2_uncaught_out_of_bounds.cpp -o 2_uncaught_out_of_bounds
	./2_uncaught_out_of_bounds

3: clean
	g++ --std=c++11 3_uncaught_stack_overflow.cpp -o 3_uncaught_stack_overflow
	./3_uncaught_stack_overflow

4: clean
	g++ --std=c++11 4_check_and_catch_divide_by_zero.cpp -o 4_check_and_catch_divide_by_zero
	./4_check_and_catch_divide_by_zero

5: clean
	g++ --std=c++11 5_catch_all_exceptions.cpp -o 5_catch_all_exceptions
	./5_catch_all_exceptions

6: clean
	g++ --std=c++11 6_catch_all_exceptions_improved.cpp -o 6_catch_all_exceptions_improved
	./6_catch_all_exceptions_improved

7: clean
	g++ --std=c++11 7_cpp_standard_exceptions.cpp -o 7_cpp_standard_exceptions
	./7_cpp_standard_exceptions
