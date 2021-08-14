api:
	g++ -shared ./src/lib/airplaneImpl.cpp ./src/lib/flightImpl.cpp ./src/lib/ticketImpl.cpp ./src/lib/containerImpl.cpp -o ./bin/libapi.so -L./bin -fpic -Wl,-rpath,bin

test_func:
	g++ ./tests/FunctionalTests/*.cpp -L./bin -lapi -o ./bin/funcional_tests -Wl,-rpath,bin

test_unit:
	g++ ./tests/UnitTests/*.cpp -L./bin -lapi -o ./bin/unit_tests -Wl,-rpath,bin

clean:
	rm -f bin/*.o bin/*.so bin/funcional_tests bin/unit_tests

run_func:
	./bin/funcional_tests

run_unit:
	./bin/unit_tests
