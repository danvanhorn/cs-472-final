CC = /nfs/farm/classes/eecs/fall2018/cs472/public/gcc/bin/g++
CCMultithread = $(CC) -ocache_sim -lpthread -Wl,-rpath,/nfs/farm/classes/eecs/fall2018/cs472/public/gcc/lib64
exe = main
exeMultithread = main-multithread

#$(exeMultithread): main.o
#	$(CCMultithread) main.o -g -o $(exeMultithread)

$(exe): main.o
	$(CC) main.o -g -o $(exe)

main.o: main.cpp
	$(CC) -c main.cpp

clean:
	rm -f a.out $(exe) *.o 
