output: main.o snakegame.o
   gcc main.o snakegame.o -o output
   
   main.o: main.c
     gcc-main.c
     
     snakegame.o: snakegame.c snakegame.h
         gccc -c reservation.c
         
         clean:
         	rm*.o output
