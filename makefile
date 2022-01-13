text_analyzer: driver.o word_analyzer.o
	g++ driver.o	word_analyzer.o -o text_analyzer

driver.o: driver.cpp
	g++	-c	driver.cpp

word_analyzer.o: word_analyzer.cpp word_analyzer.h
	g++	-c	word_analyzer.cpp

clean:
	rm	*.o	text_analyzer
