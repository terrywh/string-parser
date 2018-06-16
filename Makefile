CXX?=clang++
CXXFLAGS+= -std=c++11 -g -O0
PREFIX?=/data/vendor/parser-1.0.0

.PHONY: all test clean install
all: match_test.out separator_parser_test.out multipart_parser_test.out

match_test.out: match_test.cpp match.hpp
separator_parser_test.out: separator_parser_test.cpp separator_parser.hpp
multipart_parser_test.out: multipart_parser_test.cpp multipart_parser.hpp

%.out: %.cpp
	${CXX} ${CXXFLAGS} $< -o $@

test: match_test.out separator_parser_test.out multipart_parser_test.out
	./match_test.out 
	./separator_parser_test.out
	./multipart_parser_test.out
clean:
	rm -f ./separator_parser_test.out multipart_parser_test.out
install: requirement.hpp separator_parser.hpp multipart_parser.hpp
	mkdir -p ${PREFIX}/include
	cp -f $^ ${PREFIX}/include/