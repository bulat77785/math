CC = gcc
S21_MATH_C = s21_*.c
S21_MATH_O = s21_*.o
CFLAGS = -Wall -Wextra -Werror -std=c11
CCOV = -fprofile-arcs -ftest-coverage
COVFLAGS = --coverage
LDFLAGS = -lgcov
TFLAGS = -lcheck
#ASAN = -g -fsanitize=address

all: clean test s21_math.a gcov_report

s21_math.a: $(S21_MATH_C)
	$(CC) $(CFLAGS) -c -g $(S21_MATH_C)
	ar rcs s21_math.a $(S21_MATH_O)
	ranlib s21_math.a


test_math.o: test_math.c
	$(CC) $(ASAN) $(CFLAGS) -c test_math.c

test: s21_math.a test_math.o
	$(CC) $(ASAN) $(CCOV) test_math.o s21_math.a -o test $(TFLAGS)
	./test
	
gcov_report: s21_math.a test_math.o
	$(CC) $(ASAN) $(GFLAGS) $(CCOV) -g test_math.c $(S21_MATH_C) s21_math.a -L. s21_math.a $(TFLAGS) -o ./htmlreport.out
	./htmlreport.out
	lcov -t "htmlreport" -o test.info -c -d .
	genhtml -o report test.info

gcovr: s21_math.a test_math.o
	$(CC) $(ASAN) $(GFLAGS) $(CCOV) -g test_math.c $(S21_MATH_C) s21_math.a -L. s21_math.a $(TFLAGS) -o ./htmlreport.out
	./htmlreport.out
	gcov -f *.gcda
	gcovr
	gcovr --html-details -o report.html



check:
	cppcheck --enable=all --force *.h *.c
	cp ../materials/linters/CPPLINT.cfg CPPLINT.cfg
	python3 ../materials/linters/cpplint.py --extension=c *.c

leakscheck:
	CK_FORK=no leaks --atExit -- ./test   	
#	valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes --verbose --log-file=RESULT_VALGRIND.txt ./test


clean:
	rm -rf *.o *.a *.css *.html *.gcno *.gcda *.out *.info test report *.dSYM *.gcov

rebuild: clean all

