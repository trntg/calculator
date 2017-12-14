all:
	gcc calculator.cpp -o calculator -lstdc++
test:
	gcc tests.cpp -o tests -lstdc++
