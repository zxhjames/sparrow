CC = gcc
#CFLAGS = -g -DDEBUG -lm -Wall -I object -I vm -I compiler -I parser -I include -I cli -I gc -W -Wstrict-prototypes -Wmissing-prototypes -Wsystem-headers -fgnu89-inline
CFLAGS = -g -lm -Wall -I module1 -I module2 -I module3  -W -Wstrict-prototypes -Wmissing-prototypes -Wsystem-headers -fgnu89-inline -Wunused-parameter
TARGET = obj
DIRS =  module1 module2 module3  
CFILES = $(foreach dir, $(DIRS),$(wildcard $(dir)/*.c))
OBJS = $(patsubst %.c,%.o,$(CFILES)) 
$(TARGET):$(OBJS)
	$(CC) -o $(TARGET) $(OBJS) $(CFLAGS)
clean:
	-$(RM) $(TARGET) $(OBJS)
r: clean $(TARGET)