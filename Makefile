tests/for_test_projects/hello/rutnime/hello.dylib: tests/for_test_projects/hello/hello.cc
	mkdir -p tests/for_test_projects/hello/runtime/
# https://developer.apple.com/library/archive/documentation/DeveloperTools/Conceptual/DynamicLibraries/100-Articles/CreatingDynamicLibraries.html
	clang -dynamiclib tests/for_test_projects/hello/hello.cc -current_version 0.0.1 -compatibility_version 0.0.1 -o tests/for_test_projects/hello/runtime/hello.A.dylib