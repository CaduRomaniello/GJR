api:
	g++ -shared ./runtime/src/lib/airplaneImpl.cpp ./runtime/src/lib/flightImpl.cpp ./runtime/src/lib/ticketImpl.cpp ./runtime/src/lib/containerImpl.cpp -o ./runtime/bin/libapi.so -L./runtime/bin -fpic -Wl,-rpath,runtime/bin

test_func:
	g++ ./runtime/tests/FunctionalTests/*.cpp -L./runtime/bin -lapi -o ./runtime/bin/funcional_tests -Wl,-rpath,runtime/bin

test_unit:
	g++ ./runtime/tests/UnitTests/*.cpp -L./runtime/bin -lapi -o ./runtime/bin/unit_tests -Wl,-rpath,runtime/bin

clean:
	rm -f ./runtime/bin/*.o ./runtime/bin/*.so ./runtime/bin/funcional_tests ./runtime/bin/unit_tests

run_func:
	./runtime/bin/funcional_tests

run_unit:
	./runtime/bin/unit_tests
