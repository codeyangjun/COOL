CC=clang++
CFLAGS=-g -Wall -Wno-unused -std=c++11
GTEST_LIBS=-lgtest -lpthread
ALL=symboltab-test cool-tree-test
# test: test.cc cool-tree.cc symboltab.cc
	# $(CC) $(CFLAGS) $(GTEST_LIBS) $^ -o $@

symboltab-test:symboltab-test.cc symboltab.cc
	$(CC) $(CFLAGS) $(GTEST_LIBS) $^ -o $@

cool-tree-test:cool-tree-test.cc cool-tree.cc symboltab.cc
	$(CC) $(CFLAGS) $(GTEST_LIBS) $^ -o $@

all: $(ALL)

clean:
	rm $(ALL)
