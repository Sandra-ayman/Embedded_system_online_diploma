#@copyright : Sandra Ayman

CC=arm-none-eabi-
CFLAGS= -mthumb -mcpu=cortex-m3 -gdwarf-2
INCS=-I .
LIBS=
SRC= $(wildcard *.c)
OBJ= $(SRC:.c=.o)
#AS= $(wildcard *.s)
#ASOBJ= $(AS:.s=.o)
Project_name=learn-in-depth-cortex-m3

all: $(Project_name).bin
	@echo "Build is done"
	
%.o: %.c
	$(CC)gcc.exe -c $(INCS) $(CFLAGS) $< -o $@
	
#startup.o: startup.s
#	$(CC)as.exe $(CFLAGS) $< -o $@

$(Project_name).elf: $(OBJ)
	$(CC)ld.exe -T linker_script.ld -Map=Map_File.map $(LIBS) $(OBJ) -o $@

$(Project_name).bin: $(Project_name).elf
	$(CC)objcopy.exe -O binary $< $@
clean_all: 
	rm *.o *.elf *.bin *.map
	@echo "clean"
clean: 
	rm *.elf *.bin