CC = gcc
CFLAGS = -O2 -fopenmp 

FF =mpif90
FFLAGS = -O2 -fopenmp

all: stream_f.exe stream_c.exe

stream_f.exe: stream.f mysecond.o
	$(CC) $(CFLAGS) -c mysecond.c
	$(FF) $(FFLAGS) -c stream.f
	$(FF) $(FFLAGS) stream.o mysecond.o -o stream_f.exe

stream_c.exe: stream.c
	$(CC) $(CFLAGS) stream.c -o stream_c.exe -lrdpmc

clean:
	rm -f stream_f.exe stream_c.exe *.o
