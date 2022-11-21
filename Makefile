all: a.out b.out c.out d.out

a.out:
	g++ -std=c++11 Tests/test.cpp

b.out:
	g++ -std=c++11 Tests/test_2.cpp -o b.out
	

c.out:
	g++ -std=c++11 Tests/test_3.cpp -o c.out


d.out:
	g++ -std=c++11 Tests/test_4.cpp -o d.out


test: a.out
	./a.out
	
test2: b.out
	./b.out
	

test3: c.out
	./c.out
	

test4: d.out
	./d.out

clean:
	rm a.out b.out c.out d.out
