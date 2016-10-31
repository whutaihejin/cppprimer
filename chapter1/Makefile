.PHONY : ALL
ALL :  core debug e1.3 e1.4 fstream t1.1 t1.2 vector

core:
	g++ -g -Wall -o core core.cc
debug:
	g++ -g -Wall -o debug debug.cc
e1.3:
	g++ -g -Wall -o e1.3 e1.3.cc
e1.4:
	g++ -g -Wall -o e1.4 e1.4.cc
fstream:
	g++ -g -Wall -o fstream fstream.cc
t1.1:
	g++ -g -Wall -o t1.1 t1.1.cc
t1.2:
	g++ -g -Wall -o t1.2 t1.2.cc
vector:
	g++ -g -Wall -o vector vector.cc

.PHONY : clean
clean : 
	 rm -rf  core debug e1.3 e1.4 fstream t1.1 t1.2 vector
