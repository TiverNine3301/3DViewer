CC = gcc
OS = $(shell uname)

ifeq ($(OS), Linux)
	FLAGS = -Werror -Wall -Wextra -std=c11
	TEST_FLAGS = -lcheck -pthread -lrt -lm -lsubunit
else
	FLAGS = -Werror -Wall -Wextra -std=c11
	TEST_FLAGS = -lcheck
endif

all: install gcov_report

install: uninstall
	mkdir build
	open 3D_Viewer/3D_Viewer.pro

uninstall: clean
	rm -rf build

dvi:
	open instructions.txt

dist: install
	tar cvzf 3D_Viewer.tgz build/

tests: clean
	$(CC) *.c tests/*.c -o test $(TEST_FLAGS)
	./test

memory: clean
	$(CC) -g *.c tests/*.c -o test $(TEST_FLAGS)
	valgrind --tool=memcheck --leak-check=yes ./test

check: tests
	cppcheck --enable=all --suppress=missingIncludeSystem --inconclusive --check-config *.c *.h
	make test

gcov_report: clean
	$(CC) --coverage *.c tests/*.c -o test $(TEST_FLAGS)
	./test
	lcov -d ./ --capture --output-file s21_calc.info
	genhtml s21_calc.info --output-directory report
	open report/index.html
	
style: clean
	cp ../materials/linters/.clang-format ./
	clang-format -n *.c *.c
	clang-format -n *.h *.h
	rm -rf .clang-format

clang: clean
	cp ../materials/linters/.clang-format ./
	clang-format -i *.c 
	clang-format -i *.h
	rm -rf .clang-format

clean:
	rm -rf *.a *.out *.o test *.html *.css
	rm -rf SmartCalc_Archived.tgz
	rm -rf *.g* *.info report
